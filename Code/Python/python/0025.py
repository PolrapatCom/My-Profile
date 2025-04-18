nums = [10, 10, 20, 30, 40]
n = len(nums)
idk = 0
for i in range(1,n): 
    if(nums[i] < nums[i-1]): 
        print("no")
        idk = 1
        break
if(idk==0):
  print("yes")