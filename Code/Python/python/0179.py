a = []
for i in range(4): 
    a.append(input().split())
if(a[0][2] == a[2][2] and a[1][2] == a[3][2]): 
    print("Success")
else: 
    print("Error")