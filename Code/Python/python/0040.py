from typing import List

def fp(u,pa): 
    if(pa[u] != u):
        pa[u] = fp(pa[u],pa) 
        return pa[u]
    return u   

def comp(val): 
    return val[2]

def kruskalMST(n: int, edges: List[List[int]]) -> int:
    ans = 0
    pa = [_ for _ in range(n+1)]
    print(pa)
    edges.sort(key = comp)
    for u , v , w in edges:
        n1 = fp(u,pa) 
        n2 = fp(v,pa) 
        if(n1 != n2): 
            ans += w 
            pa[n1] = n2 
        pass
    return ans
    pass

n=5;m=6
edges = [[1, 2, 6], [2, 3, 5], [3, 4, 4], [1, 4, 1], [1, 3, 2], [3, 5, 3]]
hi = kruskalMST(n,edges)
print(hi)
