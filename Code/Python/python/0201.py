a = input()
n = len(a)
# b = input()
# nn = len(b)
b = "".join(a.split())
cnt = len(b)
for i in range(n):
    if(a[i] == " "): 
        print("", end = " ")
        continue
    print(chr(ord(a[i])+cnt),end="")
    cnt -= 1 
    # print(ord(b[i]) - ord(a[i]))