import ast

# Reading the dictionary from the 'data.txt' file
with open('data.txt', 'r') as file:
    data = ast.literal_eval(file.read())  # Convert string back to dictionary

# Function to recursively generate a 32-character secret code
def build_code(code, current):
    if current not in data:
        return code
    for part in data[current]:
        new_code = code + part.split(':')[1]
        result = build_code(new_code, part)
        if result:
            return result
    return None

# Generate all 32-character codes starting from 'start'
codes = []
for part in data['start']:
    code = build_code('', part)
    if code:
        codes.append(code)

# Function to count occurrences of each digit ('0'-'f') in a code
def count_digits(code):
    return {char: code.count(char) for char in '0123456789abcdef'}

# Sort the codes first by the count of '0', then '1', ..., 'f'
codes.sort(key=lambda code: [count_digits(code)[char] for char in '0123456789abcdef'], reverse=True)

# The flag is the first code in the sorted list
flag = codes[0]

# Print the final flag in the required format
print(f'THCTT24{{{flag}}}')