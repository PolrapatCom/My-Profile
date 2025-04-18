from collections import Counter
n = int(input())
a = []
i = 2
while(n>1): 
    if(n%i==0): 
        n /= i
        a.append(i)
        i = 1
    i += 1
a.sort()
c = Counter(a)
ans = ""
for key,value in c.items(): 
    if(value==1): 
        ans += str(f"{key} ")
    else: 
        ans += str(f"{key}^{value} ")
# print(ans)
ans = " * ".join(ans.split())        
print(ans)