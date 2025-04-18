import random

# Provided encrypted message
encrypted_message = ['7:4', '9:2', 'e:2', 'f:1', '2:3', '}:1', '3:1', '2:1', 'c:2', '1:2', 'e:2', 'a:1', '5:1', 'e:2',
                     '8:1', '9:2', '3:2', '3:2', '2:4', '2:4', 'a:1', '7:1', '1:2', '7:4', '7:3', '4:4', '9:1', '}:1',
                     '4:1', '8:1', '2:1', '}:1', 'a:1', '7:3', '2:4', '9:1', '7:3', '7:3', '3:1', 'c:2', '6:1', '0:1',
                     '2:4', 'a:2', '9:2', 'e:2', 'a:3', 'a:3']

# Function from the problem
def generate_encryption(flag):
    count = {}
    code = []
    num = 1
    for char in flag:
        if char in count:
            count[char] += 1
        else:
            count[char] = 1
        for i in range(num):
            code.append(char + ':' + str(count[char]))
        num += 1
    random.shuffle(code)
    return code

# Try an example flag
test_flag = "THCTT24{md5}"

# Generate encryption based on the test flag
generated_code = generate_encryption(test_flag)

# Check if generated_code matches the encrypted_message
generated_code, generated_code == encrypted_message

print(test_flag)
