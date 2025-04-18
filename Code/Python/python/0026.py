hero = 100
mons = [300, 170, 70, 200, 150]
# hero = 100
# mons = [700, 170, 70, 200, 150]
# hero = 100
# mons = [90, 180, 360, 720, 1440]
n = len(mons)
i = 0
maxi = -1e8
max_pos = 0
mons.sort()
for i in range(n): 
    if(mons[i] > maxi): 
        maxi = mons[i]
        max_pos = i
i = 0
while i<n:
    if(mons[max_pos]==-1): 
        break 
    for j in range(n-1,-1,-1): 
        if mons[j] != -1 and hero > mons[j]: 
            hero += mons[j] 
            mons[j] = -1
            break
    i+=1
if(mons[max_pos]==-1): 
    print(i)  
else:
    print("no")
# print(mons)
# print(hero)
# print(mons)