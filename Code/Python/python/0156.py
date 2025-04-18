import random

data = {}
char = '0123456789abcdef'

def generate(n, code):
    if n <= 8:
        temp = []
        for i in range(4):
            string = char[random.randrange(0, len(char))]
            string += char[random.randrange(0, len(char))]
            string += char[random.randrange(0, len(char))]
            string += char[random.randrange(0, len(char))]
            temp.append(str(n) + ':' + string)
        data[code] = temp
        for t in temp:
            generate(n + 1, t)
    
if __name__ == "__main__":
    # start program
    generate(1, 'start')
    open('data.txt', 'w').write(str(data))
    
    
    
