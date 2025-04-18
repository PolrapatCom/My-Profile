a = input()
n = len(a)
u , l = 0,0
for i in range(n):
    if(ord(a[i])>=ord('a') and ord(a[i])<= ord('z')): 
        u += 1
    if(ord(a[i])>=ord('A') and ord(a[i])<= ord('Z')): 
        l += 1
print(f"UPPER:{l}")
print(f"LOWER:{u}")