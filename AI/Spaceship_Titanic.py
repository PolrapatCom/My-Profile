import os

dataset_path = '/kaggle/input/'
folders = [folder for folder in os.listdir(dataset_path) if os.path.isdir(os.path.join(dataset_path, folder))]

print("Folder names and their contents:")
for folder in folders:
    print(f"\nFolder: {folder}")
    folder_path = os.path.join(dataset_path, folder)
    files = os.listdir(folder_path)
    for file in files:
        print(f"  - {file}")

import pandas as pd
import numpy as np
from sklearn.model_selection import StratifiedKFold, cross_val_score
from sklearn.preprocessing import LabelEncoder
from sklearn.impute import SimpleImputer
from xgboost import XGBClassifier
from lightgbm import LGBMClassifier
from sklearn.ensemble import StackingClassifier
from sklearn.linear_model import LogisticRegression
import os

# 1. โหลดข้อมูล
train_data = pd.read_csv('/kaggle/input/dataset-spaceship-titanic/train.csv')
test_data = pd.read_csv('/kaggle/input/dataset-spaceship-titanic/test.csv')

# 2. Feature Engineering และ Preprocessing
def preprocess_data(df, is_train=True):
    # แยก PassengerId
    df['Group'] = df['PassengerId'].apply(lambda x: x.split('_')[0]).astype(int)
    df['PersonNum'] = df['PassengerId'].apply(lambda x: x.split('_')[1]).astype(int)
    group_sizes = df['Group'].value_counts()
    df['GroupSize'] = df['Group'].map(group_sizes)
    
    # แยก Cabin
    df[['Deck', 'CabinNum', 'Side']] = df['Cabin'].str.split('/', expand=True)
    df['CabinNum'] = pd.to_numeric(df['CabinNum'], errors='coerce')
    df['CabinNumBin'] = pd.qcut(df['CabinNum'], q=4, labels=False, duplicates='drop')
    
    # Feature จากค่าใช้จ่าย
    spending_cols = ['RoomService', 'FoodCourt', 'ShoppingMall', 'Spa', 'VRDeck']
    df['TotalSpending'] = df[spending_cols].sum(axis=1)
    df['SpendingFlag'] = (df['TotalSpending'] > 0).astype(int)
    df['LuxurySpending'] = df[['Spa', 'VRDeck', 'RoomService']].sum(axis=1)
    
    # Feature ใหม่
    df['CryoSleep'] = df['CryoSleep'].fillna(0)
    df['CryoSleep_NoSpending'] = ((df['CryoSleep'] == 1) & (df['TotalSpending'] == 0)).astype(int)
    df['HomePlanet_Destination'] = df['HomePlanet'].astype(str) + '_' + df['Destination'].astype(str)
    
    # Drop คอลัมน์ที่ไม่ใช้
    drop_cols = ['PassengerId', 'Name', 'Cabin'] if not is_train else ['PassengerId', 'Name', 'Cabin', 'Transported']
    df = df.drop(drop_cols, axis=1)
    
    # Categorical features
    cat_columns = ['HomePlanet', 'CryoSleep', 'Destination', 'VIP', 'Deck', 'Side', 'CabinNumBin', 'HomePlanet_Destination']
    for col in cat_columns:
        le = LabelEncoder()
        df[col] = le.fit_transform(df[col].astype(str))
    
    # Numerical features - จัดการ missing values
    num_columns = ['Age', 'RoomService', 'FoodCourt', 'ShoppingMall', 'Spa', 'VRDeck', 
                   'CabinNum', 'Group', 'PersonNum', 'GroupSize', 'TotalSpending', 
                   'SpendingFlag', 'LuxurySpending', 'CryoSleep_NoSpending']
    imputer = SimpleImputer(strategy='median')
    df[num_columns] = imputer.fit_transform(df[num_columns])
    
    return df

# เตรียมข้อมูล
X = preprocess_data(train_data, is_train=True)
y = train_data['Transported'].astype(int)
test_X = preprocess_data(test_data, is_train=False)

# 3. สร้างโมเดล XGBoost และ LightGBM
xgb_model = XGBClassifier(
    subsample=0.8, reg_lambda=10, reg_alpha=0.1, n_estimators=300, 
    max_depth=5, learning_rate=0.03, colsample_bytree=0.8, 
    min_child_weight=3, random_state=42, eval_metric='logloss'
)

lgb_model = LGBMClassifier(
    n_estimators=300, max_depth=5, learning_rate=0.03, 
    subsample=0.8, colsample_bytree=0.8, random_state=42
)

# 4. Stacking Classifier
stacking_model = StackingClassifier(
    estimators=[('xgb', xgb_model), ('lgb', lgb_model)],
    final_estimator=LogisticRegression(),
    cv=5,  # ใช้ 5-fold CV สำหรับ stacking
    n_jobs=-1
)

# 5. วัดผลด้วย Stratified K-Fold Cross-Validation
cv = StratifiedKFold(n_splits=5, shuffle=True, random_state=42)
cv_scores = cross_val_score(stacking_model, X, y, cv=cv, scoring='accuracy')
print(f"Cross-Validation Accuracy: {cv_scores.mean():.4f} (+/- {cv_scores.std() * 2:.4f})")

# 6. ฝึกโมเดลสุดท้าย
stacking_model.fit(X, y)

# 7. ทำนายผลสำหรับ test data
test_predictions = stacking_model.predict(test_X)

# 8. สร้างไฟล์ submission
submission = pd.DataFrame({
    'PassengerId': test_data['PassengerId'],
    'Transported': test_predictions.astype(bool)
})
submission.to_csv('submission.csv', index=False)
print("Submission file created: submission.csv")

# 9. แสดง feature importance (จาก XGBoost)
feature_importance = pd.DataFrame({
    'Feature': X.columns,
    'Importance': stacking_model.named_estimators_['xgb'].feature_importances_
}).sort_values('Importance', ascending=False)
print("\nFeature Importance (XGBoost):")
print(feature_importance)