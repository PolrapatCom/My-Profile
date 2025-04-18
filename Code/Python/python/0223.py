a = sorted(list(map(int,input().split())),reverse = True)
b = input()
a = [[a[i],chr(ord('C')-i)] for i in range(3)]  
# print(a)
for i in range(3): 
    for j in range(3): 
        if(a[j][1]==b[i]): 
            print(f"{a[j][0]}",end=" ")
            