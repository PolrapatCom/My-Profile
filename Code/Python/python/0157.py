from collections import defaultdict
import ast

def count_digits(md5):
    """Count the occurrences of each digit (0-9) in the MD5 hash."""
    digit_count = {str(i): 0 for i in range(10)}
    for char in md5:
        if char in digit_count:
            digit_count[char] += 1
    return digit_count

def find_md5_with_most_digits(data):
    """Find the MD5 hash with the most occurrences of '0', then '1', etc."""
    md5_counts = defaultdict(dict)

    # Count digits for each MD5 hash
    for key in data.keys():
        parts = key.split(':')
        if len(parts) == 2:  # Ensure that there are two parts
            md5 = parts[1]  # Extract MD5 part
            md5_counts[md5] = count_digits(md5)

    # Prepare to sort hashes by counts of digits
    sorted_md5 = sorted(
        md5_counts.items(),
        key=lambda item: (
            -item[1]['0'], 
            -item[1]['1'], 
            -item[1]['2'], 
            -item[1]['3'], 
            -item[1]['4'], 
            -item[1]['5'], 
            -item[1]['6'], 
            -item[1]['7'], 
            -item[1]['8'], 
            -item[1]['9']
        )
    )

    # Get the first MD5 hash that meets the criteria
    if sorted_md5:
        best_md5 = sorted_md5[0][0]  # Extract the MD5 part
        return f"THCTT24{{{best_md5}}}"
    else:
        return "No valid MD5 hashes found."

if __name__ == "__main__":
    # Read the data from file
    with open('data.txt', 'r') as file:
        data = ast.literal_eval(file.read())

    # Find and print the result
    result = find_md5_with_most_digits(data)
    print(result)
