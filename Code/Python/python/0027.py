w = 3
h = 3
table = [
    [49, 50, 49],
    [49, 50, 50],
    [48, 49, 50]
]
cnt = 0
for i in range(w): 
    for j in range(h): 
        if(table[i][j]>=50):
            cnt += 1
if(cnt >= 3): 
    print("yes")
else: 
    print("no")