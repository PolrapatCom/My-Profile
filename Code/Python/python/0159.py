import json

def count_digits(hash_string):
    """Counts the occurrences of each digit in a hash string."""
    digit_counts = [0] * 16
    for char in hash_string:
        digit_counts[int(char, 16)] += 1
    return digit_counts

def find_max_hash(data):
    """Finds the hash with the most '0's, then '1's, and so on."""
    max_hash = None
    max_counts = None

    for hash_string in data:
        if len(hash_string) == 32:  # Ensure we're at the final level
            counts = count_digits(hash_string)
            if max_counts is None or counts > max_counts:
                max_hash = hash_string
                max_counts = counts

    return max_hash

if __name__ == "__main__":
    with open('data.txt', 'r') as f:
        data = json.load(f)

    max_hash = find_max_hash(data)
    print(f"THCTT24{{{max_hash}}}")