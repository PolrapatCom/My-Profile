from typing import List
import heapq
class Solution:
    def minimumEffortPath(self, heights: List[List[int]]) -> int:
        direc = ((-1,0),(0,1),(1,0),(0,-1))
        n = len(heights)
        m = len(heights[0])
        vis = [[1e9 for _ in range(m)]for _ in range(n)] 
        heap = []
        heapq.heapify(heap) 
        heapq.heappush(heap,(0,0,0))
        vis[0][0] = 1
        mini = 1e9
        while heap: 
            # print(heap)
            distance , x , y = heapq.heappop(heap)
            if(x == n - 1 and y == m - 1): 
                # print(vis)
                return distance
                mini = min(mini,distance)
            for i in range(4): 
                r = x + direc[i][0]
                c = y + direc[i][1]
                if(r>=0 and c>=0 and r<n and c<m): 
                    newi = max(distance,abs(heights[x][y] - heights[r][c]))
                    if(newi < vis[r][c]): 
                        vis[r][c] = newi
                        heapq.heappush(heap,(newi,r,c))
                    # print(f"{(new,x,r,y,c)}")
        return mini

heights = [[1,2,2],[3,8,2],[5,3,5]]
# heights = [[1,2,3],[3,8,4],[5,3,5]]        
hi = Solution()
hello = hi.minimumEffortPath(heights)
print(hello)