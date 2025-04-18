from itertools import permutations 

arr = [0,7,7,8,8,9]

per = permutations(arr)

cnt = 0

temp3 = []

for i in per:
    temp = "" 
    for j in i: 
        temp += str(j)
    temp2 = int(temp)
    if(temp2 > 7e5): 
        cnt += 1
    if(temp2<=7e5): 
        continue
    temp3.append(temp2)
temp3.sort()   
print(cnt)
print(temp3)
print(len(list(set(temp3))))