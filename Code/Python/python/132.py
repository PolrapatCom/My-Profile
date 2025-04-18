import re
n = 45
a = []
b = []
for i in range(n): 
    c,d = input().split("=")
    a.append(c)
    b.append(d)
    temp = input()
for i in range(n):
    a[i] = a[i].lstrip().rstrip() 
    b[i] = b[i].lstrip().rstrip()
    temp = a[i] + ";" + b[i]
    # temp = temp.replace(" ","") 
    temp = re.sub(r'\d+\)',"",temp)
    temp = temp.lstrip().rstrip() 
    print(f"{temp}")