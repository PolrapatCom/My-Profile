n = int(input())
k = int(input())
cnt = 0
num = 0
arr = [0 for _ in range(n)]
while(cnt < n):
    temp = 0
    while(True):
        num += 1 
        if(arr[(num)%n]==0): 
            temp += 1
        if(temp == k):
            arr[(num)%n] = 1
            cnt += 1
            print((num)%n if num%n != 0 else n,end=" ")
            break
     
    