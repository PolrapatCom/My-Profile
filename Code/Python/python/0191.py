n, m, k , a = list(map(int,input().split()))
cnt = 1234
for i in range(n,m+1,1): 
    cnt -= k
    k += a
if(cnt<=0): 
    print("YES")
else:
    print(cnt)