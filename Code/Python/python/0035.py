import heapq
def kLargest(lst, k):
    heap = []
    heapq.heapify(heap) 
    for i in lst: 
        heapq.heappush(heap,i)
    temp = heapq.nlargest(k,heap) 
    return temp
    ######################
    #PLEASE ADD CODE HERE#
    ######################


# Main
n=int(input())
lst=list(int(i) for i in input().strip().split(' '))
k=int(input())
ans=kLargest(lst, k)
ans.sort()
print(*ans, sep=' ')
