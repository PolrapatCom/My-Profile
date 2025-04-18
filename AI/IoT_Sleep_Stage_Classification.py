import pandas as pd
import numpy as np
import tensorflow as tf
from sklearn.model_selection import train_test_split
import os
from tensorflow.keras.layers import Input, Conv1D, MaxPooling1D, Flatten, Dense, Dropout, BatchNormalization
from tensorflow.keras.models import Model
from tensorflow.keras.callbacks import EarlyStopping

# Define paths based on dataset structure
base_path = '/kaggle/input/iot-sleep-stage-classification/'
train_dir = os.path.join(base_path, 'train', 'train')  # #train/##train/
test_segment_dir = os.path.join(base_path, 'test_segment', 'test_segment')  # #test_segment/##test_segment/
submission_file = os.path.join(base_path, 'sample_submission.csv')

# Function to load and preprocess training data
def load_train_data():
    X_segments = []
    y_segments = []
    for i in range(1, 84):  # train001.csv to train083.csv
        file_name = f'train{str(i).zfill(3)}.csv'
        file_path = os.path.join(train_dir, file_name)
        df = pd.read_csv(file_path)
        
        # Data cleaning: Handle missing values by dropping rows
        df = df.dropna()
        
        # Assume last column is label, others are features
        features = df.iloc[:, :-1].values.astype(np.float32)
        labels = df.iloc[:, -1].values
        
        # Extract 30-second segments (480 rows at 16 Hz)
        num_segments = len(df) // 480
        for j in range(num_segments):
            start_idx = j * 480
            end_idx = (j + 1) * 480
            segment = features[start_idx:end_idx, :]
            label_segment = labels[start_idx:end_idx]
            
            # Verify label consistency within segment
            if not np.all(label_segment == label_segment[0]):
                print(f"Warning: Inconsistent labels in segment {j} of {file_name}")
                continue
            
            # Check segment size
            if segment.shape[0] != 480:
                continue
                
            X_segments.append(segment)
            y_segments.append(label_segment[0])
    
    X = np.array(X_segments)
    y = np.array(y_segments)
    return X, y

# Load training data
print("Loading training data...")
X_train, y_train = load_train_data()

# Data cleaning and normalization
print("Cleaning and normalizing training data...")
# Remove any segments with NaN (shouldn't be any after dropna, but double-check)
mask = ~np.isnan(X_train).any(axis=(1, 2))
X_train = X_train[mask]
y_train = y_train[mask]

# Normalize using training data statistics
mean = X_train.mean(axis=(0, 1))
std = X_train.std(axis=(0, 1)) + 1e-8  # Avoid division by zero
X_train = (X_train - mean) / std

# Determine number of classes
unique_labels = np.unique(y_train)
num_classes = len(unique_labels)
print(f"Number of classes: {num_classes}")

# Map labels to consecutive integers starting from 0 if needed
label_map = {label: idx for idx, label in enumerate(unique_labels)}
y_train = np.array([label_map[label] for label in y_train])

# Data augmentation function (simple noise addition)
def augment_data(X):
    noise = np.random.normal(0, 0.01, X.shape)
    return X + noise

# Augment training data
X_train_aug = augment_data(X_train)
X_train = np.concatenate([X_train, X_train_aug])
y_train = np.concatenate([y_train, y_train])

# Load test data based on sample_submission.csv
print("Loading test data...")
submission_df = pd.read_csv(submission_file)
ids = submission_df['id'].values
X_test = []
test_ids = []

for id_ in ids:
    # Assume test files are in ##test_segment/###testXXX/ as {id}.csv
    # Parse subject and segment, e.g., "test001_1"
    subject = id_.split('_')[0]  # e.g., "test001"
    file_path = os.path.join(test_segment_dir, subject, f"{id_}.csv")
    
    if not os.path.exists(file_path):
        print(f"Warning: {file_path} not found, skipping")
        continue
    
    df = pd.read_csv(file_path)
    df = df.dropna()  # Clean test data
    segment = df.values.astype(np.float32)
    
    if segment.shape[0] == 480:
        X_test.append(segment)
        test_ids.append(id_)
    else:
        print(f"Warning: Segment {id_} has incorrect size {segment.shape[0]}")

X_test = np.array(X_test)
X_test = (X_test - mean) / std  # Normalize with training stats

# Define an optimized 1D CNN model
def build_model(input_shape, num_classes):
    inputs = Input(shape=input_shape)
    x = Conv1D(64, 7, activation='relu', padding='same')(inputs)
    x = BatchNormalization()(x)
    x = MaxPooling1D(2)(x)
    x = Conv1D(128, 5, activation='relu', padding='same')(x)
    x = BatchNormalization()(x)
    x = MaxPooling1D(2)(x)
    x = Conv1D(256, 3, activation='relu', padding='same')(x)
    x = BatchNormalization()(x)
    x = MaxPooling1D(2)(x)
    x = Flatten()(x)
    x = Dense(256, activation='relu')(x)
    x = Dropout(0.5)(x)
    outputs = Dense(num_classes, activation='softmax')(x)
    
    model = Model(inputs, outputs)
    model.compile(optimizer=tf.keras.optimizers.Adam(learning_rate=0.001),
                  loss='sparse_categorical_crossentropy',
                  metrics=['accuracy'])
    return model

# Build and train the model
input_shape = (480, X_train.shape[2])  # (timesteps, features)
model = build_model(input_shape, num_classes)

# Split data for validation
X_train_split, X_val, y_train_split, y_val = train_test_split(
    X_train, y_train, test_size=0.2, random_state=42
)

# Early stopping to prevent overfitting and save time
early_stopping = EarlyStopping(monitor='val_loss', patience=3, restore_best_weights=True)

print("Training model...")
model.fit(
    X_train_split, y_train_split,
    validation_data=(X_val, y_val),
    epochs=20,
    batch_size=64,  # Larger batch size for speed
    callbacks=[early_stopping],
    verbose=1
)

# Predict on test data
print("Making predictions...")
predictions = model.predict(X_test, batch_size=64)
predicted_labels = np.argmax(predictions, axis=1)

# Prepare submission
submission_df = pd.DataFrame({'id': test_ids, 'label': predicted_labels})
# Ensure all IDs from sample_submission are included
final_submission = pd.read_csv(submission_file)
final_submission = final_submission[['id']].merge(submission_df, on='id', how='left')
final_submission['label'] = final_submission['label'].fillna(0).astype(int)  # Default to 0 if missing

# Save submission
final_submission.to_csv('submission.csv', index=False)
print("Submission file 'submission.csv' created successfully!")