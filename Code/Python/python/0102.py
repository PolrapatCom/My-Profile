cnt = 0
arr = []
for i in range(10):
    for j in range(10): 
        for k in range(10):
            temp = ""
            if((i==0 and j==0) or i==0 or i==7 or j==7 or k==7): 
                continue
            check = 0
            if(i==5 or j==5 or k==5): 
                check = 1
            if(check):
                temp += str(i) + str(j) + str(k)
                arr.append(temp)
arr = list(set(arr))
arr.sort()
print(arr)
print(len(arr))