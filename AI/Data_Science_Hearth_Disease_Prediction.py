import pandas as pd
import numpy as np
from datetime import datetime
from catboost import CatBoostRegressor, Pool
from sklearn.model_selection import train_test_split, KFold
from sklearn.metrics import mean_squared_error
from sklearn.preprocessing import StandardScaler

# Load datasets
train_df = pd.read_csv('/kaggle/input/dataset-data-science-income-prediction/train.csv', low_memory=False)
test_df = pd.read_csv('/kaggle/input/dataset-data-science-income-prediction/test.csv', low_memory=False)

# Preprocess date_of_birth to calculate age and extract additional features
train_df['date_of_birth'] = pd.to_datetime(train_df['date_of_birth'], errors='coerce')
test_df['date_of_birth'] = pd.to_datetime(test_df['date_of_birth'], errors='coerce')
current_date = datetime(2023, 1, 1)
train_df['age'] = (current_date - train_df['date_of_birth']).dt.days // 365
test_df['age'] = (current_date - test_df['date_of_birth']).dt.days // 365
train_df['birth_year'] = train_df['date_of_birth'].dt.year
test_df['birth_year'] = test_df['date_of_birth'].dt.year
train_df.drop('date_of_birth', axis=1, inplace=True)
test_df.drop('date_of_birth', axis=1, inplace=True)

# Feature engineering
train_df['debt_to_income'] = train_df['total_debt'] / train_df['primary_income'].replace(0, 1)  # Avoid division by zero in train
train_df['loan_to_deposit'] = train_df['average_loan_24_months'] / train_df['deposit_balance'].replace(0, 1)
test_df['loan_to_deposit'] = test_df['average_loan_24_months'] / test_df['deposit_balance'].replace(0, 1)

# Separate target variable
y_train = train_df['primary_income']
X_train = train_df.drop('primary_income', axis=1)
X_test = test_df.drop('primary_income', axis=1, errors='ignore')

# Define feature types
num_cols = ['age', 'birth_year', 'deposit_balance', 'deposit_incoming', 'deposit_outgoing', 
            'average_loan_24_months', 'average_outstanding_balance_6_months', 'children', 
            'credit_history_3_years', 'credit_history_1_year', 'max_outstanding_balance_12_months', 
            'total_debt', 'debt_to_income', 'loan_to_deposit']
cat_cols = ['address_role', 'zip_code', 'education', 'employment_time', 'employment_industry', 
            'family_status', 'gender', 'housing_type', 'income_type', 'marital_status']

# Handle missing values and scale numerical features
scaler = StandardScaler()
for col in num_cols:
    if col == 'debt_to_income' and col not in X_test.columns:
        X_test[col] = np.nan  # Add debt_to_income to test set as NaN
    median_val = X_train[col].median()
    X_train[col] = X_train[col].fillna(median_val)
    X_test[col] = X_test[col].fillna(median_val)
    X_train[col] = scaler.fit_transform(X_train[[col]])
    X_test[col] = scaler.transform(X_test[[col]])

for col in cat_cols:
    X_train[col] = X_train[col].astype(str).fillna('Unspecified')
    X_test[col] = X_test[col].astype(str).fillna('Unspecified')

# Define feature columns (exclude 'id')
feature_cols = [col for col in X_train.columns if col != 'id']
cat_indices = [i for i, col in enumerate(feature_cols) if col in cat_cols]

# K-Fold Cross-Validation for better generalization
kf = KFold(n_splits=5, shuffle=True, random_state=42)
test_predictions = np.zeros(len(X_test))
val_scores = []

for fold, (train_idx, val_idx) in enumerate(kf.split(X_train)):
    X_train_fold = X_train.iloc[train_idx][feature_cols]
    y_train_fold = y_train.iloc[train_idx]
    X_val_fold = X_train.iloc[val_idx][feature_cols]
    y_val_fold = y_train.iloc[val_idx]

    # Create CatBoost Pools
    train_pool = Pool(X_train_fold, y_train_fold, cat_features=cat_indices)
    val_pool = Pool(X_val_fold, y_val_fold, cat_features=cat_indices)
    test_pool = Pool(X_test[feature_cols], cat_features=cat_indices)

    # Initialize and train the model with tuned hyperparameters
    model = CatBoostRegressor(
        iterations=2000,
        learning_rate=0.03,
        depth=8,
        l2_leaf_reg=5,
        random_seed=42 + fold,
        verbose=500,
        task_type='CPU'
    )
    model.fit(train_pool, eval_set=val_pool, early_stopping_rounds=100)

    # Validate and store score
    val_pred = model.predict(val_pool)
    rmse = np.sqrt(mean_squared_error(y_val_fold, val_pred))
    val_scores.append(rmse)
    print(f"Fold {fold + 1} RMSE: {rmse}")

    # Predict on test set and average across folds
    test_predictions += model.predict(test_pool) / kf.n_splits

print(f"Mean Validation RMSE: {np.mean(val_scores)}")

# Create submission file
submission = pd.DataFrame({'id': X_test['id'], 'primary_income': test_predictions})
submission.to_csv('submission.csv', index=False)

print("Submission file 'submission.csv' has been created successfully!")