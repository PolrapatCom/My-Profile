a = input().split()
b = []
for i in range(len(a)): 
    if(a[i]=='A'): 
        b.append([1,'A'])
    elif(a[i]=='J'): 
        b.append([10,'J'])
    elif(a[i]=='Q'): 
        b.append([11,'Q'])
    elif(a[i]=='K'): 
        b.append([12,'K'])
    else: 
        b.append([int(a[i]),a[i]])
b.sort()
for i in range(len(b)): 
    print(b[i][1],end=" ")
    