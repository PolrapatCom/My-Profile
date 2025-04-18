a = input() 
n = len(a)
s = ""
for i in range(n): 
    s += chr(ord(a[i])+4)
print(s)