table = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
n = 3
maxi = -1e8
for i in range(n): 
    sum = 0
    for j in range(n): 
        sum += table[i][j]
    maxi = max(maxi,sum)
for i in range(n): 
    sum = 0
    for j in range(n): 
        sum += table[j][i]
    maxi = max(maxi,sum)
print(maxi)