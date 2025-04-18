import torch
import torch.nn as nn
import torch.optim as optim
from torch.utils.data import Dataset, DataLoader, random_split
import torchvision.transforms as transforms
import pandas as pd
import cv2
import os
import timm  # For EfficientNet
import warnings
warnings.filterwarnings('ignore')

# Configurable Paths (Kaggle-specific)
DATA_ROOT = '/kaggle/input/dataset-image-processing-house-recognition'
TRAIN_CSV = os.path.join(DATA_ROOT, 'train.csv')
TRAIN_IMG_DIR = os.path.join(DATA_ROOT, 'train/train')
TEST_IMG_DIR = os.path.join(DATA_ROOT, 'test/test')
SUBMISSION_CSV = os.path.join(DATA_ROOT, 'sample_submission.csv')

# Custom Dataset for Training
class HouseDataset(Dataset):
    def __init__(self, csv_file, root_dir, transform=None):
        self.data = pd.read_csv(csv_file)
        self.root_dir = root_dir
        self.transform = transform
        self.valid_data = [(os.path.join(root_dir, self.data.iloc[idx, 0]), self.data.iloc[idx, 1])
                           for idx in range(len(self.data)) if os.path.exists(os.path.join(root_dir, self.data.iloc[idx, 0]))]
                
    def __len__(self):
        return len(self.valid_data)
    
    def __getitem__(self, idx):
        img_path, label = self.valid_data[idx]
        image = cv2.imread(img_path)
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        if self.transform:
            image = self.transform(image)
        return image, label

# Custom Dataset for Testing
class TestDataset(Dataset):
    def __init__(self, ids, root_dir, transform=None):
        self.ids = ids
        self.root_dir = root_dir
        self.transform = transform
        self.valid_ids = [id for id in ids if os.path.exists(os.path.join(root_dir, f"{id}.jpg"))]
                
    def __len__(self):
        return len(self.valid_ids)
    
    def __getitem__(self, idx):
        id = self.valid_ids[idx]
        img_path = os.path.join(self.root_dir, f"{id}.jpg")
        image = cv2.imread(img_path)
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        if self.transform:
            image = self.transform(image)
        return image, id

# Define Transforms
train_transform = transforms.Compose([
    transforms.ToPILImage(),
    transforms.Resize((224, 224)),
    transforms.RandomHorizontalFlip(),
    transforms.ToTensor(),
    transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])
])

test_transform = transforms.Compose([
    transforms.ToPILImage(),
    transforms.Resize((224, 224)),
    transforms.ToTensor(),
    transforms.Normalize(mean=[0.485, 0.456, 0.406], std=[0.229, 0.224, 0.225])
])

# Load Data
train_df = pd.read_csv(TRAIN_CSV)
num_classes = train_df['class'].nunique()
submission_df = pd.read_csv(SUBMISSION_CSV)
test_ids = submission_df['id'].tolist()

# Create Datasets
train_dataset = HouseDataset(TRAIN_CSV, TRAIN_IMG_DIR, transform=train_transform)
test_dataset = TestDataset(test_ids, TEST_IMG_DIR, transform=test_transform)

# Split Train Data
train_size = int(0.8 * len(train_dataset))
val_size = len(train_dataset) - train_size
train_set, val_set = random_split(train_dataset, [train_size, val_size])

# Data Loaders
train_loader = DataLoader(train_set, batch_size=32, shuffle=True, num_workers=2)
val_loader = DataLoader(val_set, batch_size=32, shuffle=False, num_workers=2)
test_loader = DataLoader(test_dataset, batch_size=32, shuffle=False, num_workers=2)

# Load Pre-trained EfficientNet-B0
model = timm.create_model('efficientnet_b0', pretrained=True, num_classes=num_classes)
device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
model.to(device)

# Freeze all layers initially
for param in model.parameters():
    param.requires_grad = False

# Unfreeze the classifier
for param in model.classifier.parameters():
    param.requires_grad = True

# Loss and Optimizer
criterion = nn.CrossEntropyLoss()
optimizer = optim.Adam(filter(lambda p: p.requires_grad, model.parameters()), lr=0.001)
scheduler = optim.lr_scheduler.StepLR(optimizer, step_size=3, gamma=0.1)

# Training Loop
num_epochs = 7
best_val_acc = 0.0
for epoch in range(num_epochs):
    model.train()
    running_loss = 0.0
    for images, labels in train_loader:
        images, labels = images.to(device), labels.to(device)
        optimizer.zero_grad()
        outputs = model(images)
        loss = criterion(outputs, labels)
        loss.backward()
        optimizer.step()
        running_loss += loss.item()
    print(f"Epoch [{epoch+1}/{num_epochs}], Loss: {running_loss/len(train_loader):.4f}")
    
    # Unfreeze last block after 3 epochs for fine-tuning
    if epoch == 2:
        for param in model.blocks[-1].parameters():  # Correctly unfreeze last block
            param.requires_grad = True
        optimizer = optim.Adam(filter(lambda p: p.requires_grad, model.parameters()), lr=0.0001)  # Lower LR for fine-tuning
    
    # Validation (every 2 epochs + last epoch)
    if epoch % 2 == 0 or epoch == num_epochs - 1:
        model.eval()
        correct = 0
        total = 0
        with torch.no_grad():
            for images, labels in val_loader:
                images, labels = images.to(device), labels.to(device)
                outputs = model(images)
                _, predicted = torch.max(outputs.data, 1)
                total += labels.size(0)
                correct += (predicted == labels).sum().item()
        val_accuracy = 100 * correct / total
        print(f"Validation Accuracy: {val_accuracy:.2f}%")
        
        if val_accuracy > best_val_acc:
            best_val_acc = val_accuracy
            torch.save(model.state_dict(), 'best_model.pth')
            print(f"Saved best model with accuracy: {val_accuracy:.2f}%")
    
    scheduler.step()

# Load Best Model
model.load_state_dict(torch.load('best_model.pth'))
model.eval()

# Predict on Test Set
predicted_classes = []
test_ids_order = []
with torch.no_grad():
    for images, ids in test_loader:
        images = images.to(device)
        outputs = model(images)
        _, predicted = torch.max(outputs.data, 1)
        predicted_classes.extend(predicted.cpu().numpy())
        test_ids_order.extend(ids)

# Create Submission
submission_dict = {id: pred for id, pred in zip(test_ids_order, predicted_classes)}
submission_df['answer'] = submission_df['id'].map(lambda x: submission_dict.get(x, 0))
submission_df.to_csv('/kaggle/working/submission.csv', index=False)
print("Submission file '/kaggle/working/submission.csv' created successfully!")