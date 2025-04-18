n = int(input())
mini = 1e9
maxi = -1e9
for i in range(n): 
    a = int(input()) 
    mini = min(mini,a)
    maxi = max(maxi,a)
print(mini)
print(maxi)
