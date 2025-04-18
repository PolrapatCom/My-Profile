from collections import *
D = defaultdict(int)
n = 10 
for i in range(n): 
    a = int(input())
    D[a%42] = 1
cnt = 0
for i in range(42): 
    if(D[i]==1): 
        cnt += 1    
print(cnt)  