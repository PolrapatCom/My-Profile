name = "GUITAR:"
a = []
for i in range(3): 
    temp = input()
    a.append(temp)
c = []
for i in range(3):
    n = 1 
    for j in range(len(name)): 
        if(a[i][j]!=name[j]): 
            n = 0
    if(n):
        c = a[i][7:][1:len(c)-1].split(",")
ans = []
# print(c)
for i in range(len(c)): 
    k = c[i].strip()
    n = 1
    for j in range(len(k)): 
        if((ord(k[j])>=ord('a') and ord(k[j])<=ord('z')) or (ord(k[j])>=ord('A') and ord(k[j])<=ord('Z'))): 
            hi = 0
        else: 
            n = 0
    if(n): 
        ans.append(k)
ans2 = "["
for i in ans: 
    ans2 += i
    if(i != ans[-1]):
        ans2 += ", "
ans2 += "]"
print(f"{name}{ans2}")    