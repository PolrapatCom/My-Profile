a = input()
n = len(a)
for i in range(n): 
    for k in range(n*2-i*2-2): 
        print(" ",end="")
    for k in range(i,0,-1):
        print(a[k],end=" ")
    print(a[0],end = " ")
    for k in range(i):
        print(a[k+1],end=" ")
    print("")