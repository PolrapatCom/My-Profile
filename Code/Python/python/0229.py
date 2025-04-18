cnt = 0
temp = input()
n = len(temp)
for i in range(n): 
    if(temp[i]=="("): 
        cnt += 1
print(cnt)