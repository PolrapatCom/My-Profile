a = input().split()
print(type(a))
n = len(a)
print(a)
for i in range(n): 
    if(a[i]=='{' or a[i]=='}'): 
        print(a[i],end="")
    else: 
        print(chr(int(a[i])+ord('a')-1),end="")