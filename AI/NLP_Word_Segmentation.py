import pandas as pd
import numpy as np
from pythainlp import word_tokenize
import re
from tqdm import tqdm

# File paths (adjust if not on Kaggle)
TEST_PATH = '/kaggle/input/nlp-word-segmentation/ws_test.txt'
SUBMISSION_PATH = '/kaggle/input/nlp-word-segmentation/ws_sample_submission.csv'
OUTPUT_PATH = 'submission.csv'

# Data cleaning function
def clean_text(text):
    # Remove unwanted characters, keep Thai and basic punctuation
    text = re.sub(r'[^\u0E00-\u0E7F\s\-\.,!?]', '', text)
    # Remove extra whitespace
    text = ' '.join(text.split())
    return text

# Load and process test data
with open(TEST_PATH, 'r', encoding='utf-8') as f:
    test_lines = f.readlines()

# Clean the text
cleaned_lines = [clean_text(line.strip()) for line in test_lines]

# Tokenize using pythainlp's high-accuracy engine ('newmm' is fast and accurate)
# Note: For even better accuracy, you could fine-tune a transformer like 'wangchanberta', but it’s slower
tokenized_output = []
for line in tqdm(cleaned_lines, desc="Tokenizing"):
    tokens = word_tokenize(line, engine='newmm')  # 'newmm' is fast and reliable
    tokenized_output.extend(tokens)

# Load sample submission to match format
sample_submission = pd.read_csv(SUBMISSION_PATH)

# Prepare submission dataframe
submission = sample_submission.copy()
submission['Predicted'] = ''  # Initialize all as empty

# Fill predictions based on tokenized output
# Assuming each token corresponds to an Id sequentially (adjust logic if PDF specifies otherwise)
for i, token in enumerate(tokenized_output[:len(submission)]):
    submission.loc[i, 'Predicted'] = token

# Ensure empty strings for non-word positions (if required by guideline)
# This is a heuristic; adjust based on ws_list.txt tags or PDF rules if needed
submission['Predicted'] = submission['Predicted'].replace(np.nan, '')

# Save to CSV
submission.to_csv(OUTPUT_PATH, index=False)
print(f"Submission saved to {OUTPUT_PATH}")

# Preview
print(submission.head())