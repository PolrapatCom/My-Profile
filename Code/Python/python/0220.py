#error
a , b = list(map(int,input().split()))
n = True
c , d = 0 , 0
ans = 0
while(n): 
    if(a>=b or c>=2 or d>=4): 
        c += a//b
        d += a//b
        ans += a//b
        a %= b
        a += c//2
        ans += c//2
        c %= 2
        a += d//4
        ans += d//4
        d %= 4
    else:
        n = False
print(ans)