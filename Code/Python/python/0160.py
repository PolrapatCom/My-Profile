import ast

# Step 1: Read the data from the file
with open('data.txt', 'r') as file:
    data = ast.literal_eval(file.read())

# Step 2: Function to count occurrences of each digit in the MD5 hash
def count_digits(md5_hash):
    count = {str(i): 0 for i in range(10)}  # Count for '0' to '9'
    count.update({chr(i): 0 for i in range(ord('a'), ord('f') + 1)})  # Count for 'a' to 'f'
    
    for char in md5_hash:
        if char in count:
            count[char] += 1
            
    return count

# Step 3: Traverse through the dictionary to find all MD5 hashes
hashes = []

# Use DFS to retrieve all MD5 hashes
def dfs(key):
    if key in data:
        for value in data[key]:
            # Append the MD5 hash part to the list
            md5_part = value.split(':')[1]  # Get the part after ':'
            hashes.append(md5_part)
            dfs(value)

# Start the DFS from the 'start' key
dfs('start')

# Step 4: Initialize variables to keep track of the best MD5 hash
best_md5 = None
best_counts = None

# Iterate through all collected MD5 hashes to find the best one
for md5_hash in hashes:
    # Count the digits in the current MD5 hash
    counts = count_digits(md5_hash)
    
    # Check if we should update the best MD5 hash based on priority
    if best_counts is None or best_md5 is None:
        best_md5 = md5_hash
        best_counts = counts
    else:
        for digit in [str(i) for i in range(10)] + [chr(i) for i in range(ord('a'), ord('f') + 1)]:
            if counts[digit] > best_counts[digit]:
                best_md5 = md5_hash
                best_counts = counts
                break
            elif counts[digit] < best_counts[digit]:
                break

# Step 5: Format the result
result = f"THCTT24{{{best_md5}}}"
print(result)
