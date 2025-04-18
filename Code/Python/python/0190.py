a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = []
if(len(a) != len(b)): 
    print("Invalid")
else:
    for i in range(len(a)): 
        c.append(a[i]+b[i])
    if(max(c)>32548): 
        print("Invalid")
    else: 
        for i in c: 
            print(i,end=" ")