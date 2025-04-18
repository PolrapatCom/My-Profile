mod = 998244353
n = int(input())
a = [ ]
for i in range(n): 
    b,c = list(map(int,input().split()))
    temp = 1
    while(b>c): 
        temp *= b
        b -= 1
    a.append(temp)
for value in a: 
    print(value % mod)