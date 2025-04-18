import ast

# Read the data from the file
with open('data.txt', 'r') as f:
    data = ast.literal_eval(f.read())

# Function to extract all MD5 codes starting from 'start'
def extract_md5_codes(data):
    codes = []
    stack = ['start']  # Start traversal from 'start'

    while stack:
        current = stack.pop()
        if current in data:
            for next_code in data[current]:
                # Get the MD5 value (after the colon)
                md5_value = next_code.split(':')[1]
                codes.append(md5_value)  # Store the MD5 code
                stack.append(next_code)  # Add next code for further traversal

    return codes

# Function to count digit occurrences and determine the best MD5
def find_best_md5(codes):
    best_md5 = None
    best_counts = [-1] * 10  # Initialize to hold the max counts for digits 0-9

    for code in codes:
        # Count occurrences of digits 0-9
        counts = [code.count(str(digit)) for digit in range(10)]

        # Determine if this code is the best
        if best_md5 is None:
            best_md5 = code
            best_counts = counts
        else:
            for i in range(10):  # Check from '0' to '9'
                if counts[i] > best_counts[i]:  # This code has a better count
                    best_md5 = code
                    best_counts = counts
                    break  # No need to check further
                elif counts[i] < best_counts[i]:  # Current best is still better
                    break  # Stop checking as we already have a better code

    return best_md5

if __name__ == "__main__":
    md5_codes = extract_md5_codes(data)
    best_md5 = find_best_md5(md5_codes)
    
    # Format the answer
    if best_md5:
        print(f"THCTT24{{{best_md5}}}")
    else:
        print("No valid MD5 codes found.")
