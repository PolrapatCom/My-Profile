arr = []
while(True): 
    s = list(map(int,input().split()))
    if(len(s)==1 and s[0] ==-1): 
        break
    arr.append(s)
n = len(arr)
m = len(arr[0])
for j in range(m): 
    for i in range(n): 
        print(arr[i][j],end=" ")
    print()