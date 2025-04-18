# n = list(map(int,input().split()))
# print(n)
arr = [9, 11, 16, 19, 20, 21, 22, 29, 31, 39, 40, 90, 95]
n = int(input())
check = 0
for i in range(len(arr)): 
    if(n == arr[i]): 
        check = 1
if(check):
    print("Found")
else: 
    print("Not Found")
     