import copy
def ok(row,col,ans,arr,n): 
    dubrow = row
    dubcol = col 
    while(row>=0 and col>=0): 
        if(arr[row][col] == 1): 
            return False
        row -= 1
        col -= 1 
    row = dubrow
    col = dubcol
    while(col>=0):
        if(arr[row][col] == 1): 
            return False
        col -= 1
    row = dubrow
    col = dubcol 
    while(row<n and col>=0): 
        if(arr[row][col] == 1): 
            return False 
        row += 1
        col -= 1
    return True

def f(col,ans,arr,n):
    if(col == n): 
        ans.append(copy.deepcopy(arr))
        return 
    for row in range(n): 
        if(ok(row,col,ans,arr,n)): 
            arr[row][col] = 1 
            f(col+1,ans,arr,n)  
            arr[row][col] = 0
    
def solveNQueens(n): 
    arr = [[0 for _ in range(n)]for _ in range(n)] 
    ans = [] 
    f(0,ans,arr,n)
    return ans 

n = int(input())
hi = solveNQueens(n)
possibleway = len(hi)
for k in range(possibleway):
    temp = []    
    for i in range(n): 
        for j in range(n): 
            print(hi[k][i][j],end=" ")
    print("")

