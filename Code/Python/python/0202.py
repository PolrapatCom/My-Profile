from collections import deque
n , m = list(map(int,input().split())) 
arr = []
adj = [[] for _ in range(n)]
q = deque()
for i in range(n): 
    temp = input().split()
    for j in range(m): 
        if(temp[j] == "#"): 
            adj[i].append(j)


