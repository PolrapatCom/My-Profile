a = list(map(int,input().split(",")))
# print(a)
temp = []
for i in range(len(a)):
    if((a[i] % 7 == 0 and a[i] % 11 != 0) or a[i] == 1): 
        temp.append(a[i])
b = (str(temp))
ans = ""
for i in range (1,len(b)-1): 
    if(b[i]!=" "): 
        ans += b[i]
print(ans)