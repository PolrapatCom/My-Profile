from typing import List
from collections import deque

def bfsTraversal(n: int, adj: List[List[int]]) -> List[int]:
    q = deque() 
    ans = []
    vis = [0 for _ in range(n)]
    vis[0] = 1
    for i in adj[0]: 
        q.append((i))
    while q: 
        x = q.popleft()
        if(vis[x]): 
            continue 
        for y in adj[x]: 
            q.append(y)
        ans.append(x)
        vis[x] = 1
    # write your code here
    if(not len(ans)): 
        return [0]
    if(ans[0]!=0): 
        ans.insert(0,0)
    # print(adj)
    return ans
    pass
    
adj = [[1,2,3],[4], [5], [],[],[]]
hi = bfsTraversal(len(adj),adj) 
print(hi)