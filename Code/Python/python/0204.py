a = list(map(int,input().split())) 
d = [0 for _ in range(3)]
for i in range(3): 
    d[i] = int(input())
b = []
for i in range(3): 
    b.append([abs(a[i]),a[i],d[i],-1])
arr = sorted(b ,key = lambda x: (x[0] , x[1]))
for i in range(3): 
    print(f"Distance{i+1} = {arr[i][0] + d[i]}")
# print(arr)