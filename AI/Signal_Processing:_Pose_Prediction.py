import numpy as np
import pandas as pd
import tensorflow as tf
from tensorflow.keras.models import Model
from tensorflow.keras.layers import Input, Masking, Conv1D, Bidirectional, LSTM, Dense, Dropout, BatchNormalization, Attention, Concatenate
from tensorflow.keras.preprocessing.sequence import pad_sequences
from sklearn.model_selection import train_test_split
from sklearn.utils.class_weight import compute_class_weight
import os

# Define directories
train_dir = '/kaggle/input/signal-processing-pose-prediction/train/train/'
test_dir = '/kaggle/input/signal-processing-pose-prediction/test/test/'

# Load metadata
train_df = pd.read_csv('/kaggle/input/signal-processing-pose-prediction/train.csv')
submission_df = pd.read_csv('/kaggle/input/signal-processing-pose-prediction/sample_submission.csv')

train_ids = train_df['id'].values
train_labels = train_df['class'].values
test_ids = submission_df['id'].values

# Step 1: Analyze sequence lengths and set max_len
seq_lengths = [np.load(os.path.join(train_dir, id + '.npy')).shape[0] for id in train_ids]
max_len = int(np.percentile(seq_lengths, 95))  # 95th percentile
input_shape = np.load(os.path.join(train_dir, train_ids[0] + '.npy')).shape[1:]  # e.g., (56, 2)
num_features = np.prod(input_shape)  # e.g., 56 * 2 = 112

print(f"Max sequence length: {max_len}, Input shape per timestep: {input_shape}, Base features: {num_features}")
print(f"Sequence length stats - Min: {min(seq_lengths)}, Max: {max(seq_lengths)}, Mean: {np.mean(seq_lengths):.1f}")
print(f"Class distribution:\n{pd.Series(train_labels).value_counts()}")

# Step 2: Compute global mean and std for normalization
sum_features = np.zeros(num_features)
sum_squares = np.zeros(num_features)
total_points = 0

for id in train_ids:
    file_path = os.path.join(train_dir, id + '.npy')
    data = np.load(file_path)
    data_flat = data.reshape(data.shape[0], -1)
    sum_features += np.sum(data_flat, axis=0)
    sum_squares += np.sum(data_flat**2, axis=0)
    total_points += data_flat.shape[0]

mean = sum_features / total_points
std = np.sqrt(sum_squares / total_points - mean**2)

# Step 3: Feature extraction function
def extract_features(data, window_size=50):
    data_flat = data.reshape(data.shape[0], -1)
    data_norm = (data_flat - mean) / std
    n_windows = (data_norm.shape[0] + window_size - 1) // window_size
    padded_len = n_windows * window_size
    data_padded = np.pad(data_norm, ((0, padded_len - data_norm.shape[0]), (0, 0)), mode='constant')
    windows = data_padded.reshape(n_windows, window_size, num_features)
    feats = np.stack([
        np.mean(windows, axis=1),
        np.std(windows, axis=1),
        np.min(windows, axis=1),
        np.max(windows, axis=1)
    ], axis=-1)  # Shape: (n_windows, num_features, 4)
    return feats.reshape(n_windows, num_features * 4)

# Load and preprocess training data with augmentation
train_data = []
for id in train_ids:
    file_path = os.path.join(train_dir, id + '.npy')
    data = np.load(file_path)
    feats = extract_features(data)
    noise = np.random.normal(0, 0.05, feats.shape)
    shift = np.roll(feats, np.random.randint(-5, 5), axis=0)
    train_data.append(feats + noise)
    train_data.append(shift + np.random.normal(0, 0.05, shift.shape))

train_labels = np.repeat(train_labels, 2)  # Double labels
num_features_aug = num_features * 4  # 448 if num_features=112
train_data_padded = pad_sequences(train_data, maxlen=max_len, padding='post', dtype='float32')

# Step 4: Split into training and validation sets
X_train, X_val, y_train, y_val = train_test_split(
    train_data_padded, train_labels, test_size=0.2, random_state=42
)

# Step 5: Compute class weights
class_weights = compute_class_weight('balanced', classes=np.unique(train_labels), y=train_labels)
class_weight_dict = dict(enumerate(class_weights))

# Step 6: Build high-accuracy model with Functional API
inputs = Input(shape=(max_len, num_features_aug))
x = Masking(mask_value=0.)(inputs)
x = Conv1D(filters=64, kernel_size=5, activation='relu', padding='same')(x)
x = BatchNormalization()(x)
x = Bidirectional(LSTM(128, return_sequences=True))(x)
x = Dropout(0.3)(x)
lstm_out = LSTM(128, return_sequences=True)(x)
lstm_out = BatchNormalization()(lstm_out)
lstm_out = Dropout(0.3)(lstm_out)

# Attention mechanism
attention_out = Attention()([lstm_out, lstm_out])  # Query and value are the same
x = Concatenate()([lstm_out, attention_out])  # Combine LSTM and attention outputs
x = LSTM(128)(x)  # Reduce to 2D
x = Dense(64, activation='relu')(x)
x = Dropout(0.3)(x)
outputs = Dense(7, activation='softmax')(x)

model = Model(inputs=inputs, outputs=outputs)

# Compile with learning rate scheduler
initial_learning_rate = 0.001
lr_schedule = tf.keras.optimizers.schedules.ExponentialDecay(
    initial_learning_rate, decay_steps=1000, decay_rate=0.9
)
model.compile(
    optimizer=tf.keras.optimizers.Adam(learning_rate=lr_schedule),
    loss='sparse_categorical_crossentropy',
    metrics=['accuracy']
)

# Step 7: Train with early stopping
early_stopping = tf.keras.callbacks.EarlyStopping(monitor='val_loss', patience=10, restore_best_weights=True)
model.fit(
    X_train, y_train,
    validation_data=(X_val, y_val),
    epochs=50,
    batch_size=32,
    callbacks=[early_stopping],
    class_weight=class_weight_dict,
    verbose=1
)

# Step 8: Load and preprocess test data
test_data = []
for id in test_ids:
    file_path = os.path.join(test_dir, id + '.npy')
    data = np.load(file_path)
    feats = extract_features(data)
    test_data.append(feats)

test_data_padded = pad_sequences(test_data, maxlen=max_len, padding='post', dtype='float32')

# Step 9: Predict on test data
predictions = model.predict(test_data_padded)
predicted_classes = np.argmax(predictions, axis=1)

# Step 10: Prepare submission file
submission_df['class'] = predicted_classes
submission_df.to_csv('submission.csv', index=False)

print("Submission file 'submission.csv' has been created.")