from google.colab import drive

drive.mount('/content/drive')

file_path = '/content/drive/My Drive/colab_data/from_translate.txt'
from_translate = []

with open(file_path, 'r', encoding='utf-8') as file:
    content = file.read()
    from_translate.append(content)

file_path = 'from_translate.txt'
with open(file_path, 'w', encoding='utf-8') as file:
    for content in from_translate:
        file.write(content)
        

!pip install textblob
!pip install --upgrade googletrans==4.0.0-rc1
from textblob import TextBlob
from googletrans import Translator


def is_valid_english_word(word):
    valid_chars = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ")
    is_valid = len(word) > 2 and all(char in valid_chars for char in word) and len(word) < 20
    return is_valid

def is_invalid_thai_word(word):
    invalid_chars = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    is_invalid = any(char in invalid_chars for char in word)
    return is_invalid

def count_sentences(file_path):
    sentence_count = 0
    with open(file_path, 'r', encoding='utf-8') as file:
        for line in file:
            sentence_count += 1
    return sentence_count

translator = Translator()
vocab = []
file_path = 'from_translate.txt'
sentence_count = count_sentences(file_path) / 3 - 2
n = 0

with open(file_path, 'r', encoding='utf-8') as file:
    for _ in range(6):
        file.readline()
    for line in file:
        n += 1
        print(f"{100*n/sentence_count:.2f}% complete")
        try:
            language1, useless, language2 = line.split()
        except ValueError:
            print(f"Issue found on line {line}: {line.strip()}")
        word1 = file.readline().strip()
        word2 = file.readline().strip()
        if language1 == "อังกฤษ" and language2 == "ไทย" and is_valid_english_word(word1):
            try:
                blob = TextBlob(word1)
                corrected_word1 = str(blob.correct())
                if not corrected_word1 == word1:
                    continue
                translated_word1 = translator.translate(corrected_word1, dest='th').text
                if translated_word1.lower() == corrected_word1.lower() or is_invalid_thai_word(translated_word1) or corrected_word1.count(" ") > 2:
                    continue
                if translated_word1 is not None:
                    vocab.append((word1.lower(), translated_word1))
            except Exception as e:
               print(f"Translation failed for '{corrected_word1}': {e}")
        elif language1 == "ไทย" and language2 == "อังกฤษ" and is_valid_english_word(word2):
            try:
                blob = TextBlob(word2)
                corrected_word2 = str(blob.correct())
                if not corrected_word2 == word2:
                    continue
                translated_word2 = translator.translate(corrected_word2, dest='th').text
                if translated_word2.lower() == corrected_word2.lower() or is_invalid_thai_word(translated_word2) or corrected_word2.count(" ") > 2:
                    continue
                if translated_word2 is not None:
                    vocab.append((word2.lower(), translated_word2))
            except Exception as e:
               print(f"Translation failed for '{corrected_word2}': {e}")

vocab_sorted = sorted(set(vocab))
output_file_path = 'vocab.txt'

print(vocab_sorted)

with open(output_file_path, 'w', encoding='utf-8') as output_file:
    for pair in vocab_sorted:
        output_file.write(f"{pair[0]},{pair[1]}\n")

print(f"Vocabulary written to {output_file_path}")
