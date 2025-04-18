a = [1,2,3,5,7,9,11,13,15,17,19,21,23,25,27,29]
n = int(input())
check = 1
for i in range(len(a)): 
    if(a[i]==n): 
        print(i)
        check = 0
if(check): 
    print(-1)