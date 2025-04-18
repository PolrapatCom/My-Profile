a = input()
b = input()
a = a.split(b)
# print(a)
n = len(a)
for i in range(n):
    if(i==0):
        print(f"{a[i]}{b}")
    elif(i==n-1):
        print(f"{b}{a[i]}")
    else: 
        print(f"{b}{a[i]}{b}")