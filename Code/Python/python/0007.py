from typing import List
from collections import *

def f(x,y,move,matrix,ans,n,m,vis): 
    if(x==n-1 and y==m-1): 
        ans.append(move)
    move1 = ((-1,0),(0,1),(1,0),(0,-1))
    move2 = "URDL"
    for i in range(4): 
        r = x + move1[i][0] 
        c = y + move1[i][1] 
        if(r>=0 and c>=0 and r<n and c<m and matrix[r][c]==1 and not vis[r][c]): 
            vis[r][c] = 1
            f(r,c,move + move2[i],matrix,ans,n,m,vis)
            vis[r][c] = 0
            

def ratMaze(matrix: List[List[int]]) -> List[str]:
    # if(matrix[0][0] == 0 or matrix[-1][-1] == 0):
    #     return [-1]
    ans = []    
    n = len(matrix) 
    m = len(matrix[0])
    vis = [[0 for _ in range(m)]for _ in range(n)]
    vis[0][0] = 1
    f(0,0,"",matrix,ans,n,m,vis)
    if ans:
        return ans
    return [-1]
    pass
n = int(input())
matrix = []
for i in range(n):
    line = input().split() 
    matrix.append([int(num) for num in line])
hi = ratMaze(matrix)
print(hi)

# 4
# 1 1 1 1 
# 0 1 1 1 
# 0 1 0 1 
# 1 1 1 1 

# output
# ['RRRDDD', 'RRRDLLDDRR', 'RRDRDD', 'RRDLDDRR', 'RDRURDDD', 'RDRRDD', 'RDDDRR']
