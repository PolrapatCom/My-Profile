n = int(input())
a = [ [0 for _ in range(2*n+1)] for _ in range(2*n+1)]
for i in range(n+1):
    for j in range(i,2*n+1-i):
        for k in range(i,2*n+1-i): 
            a[j][k] = i
for u in a: 
    for v in u: 
        print(v,end="")
    print("")
# print(a)