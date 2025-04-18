m = 8
n = 13
sum = 0
for i in range(m,n+1):
    if(i%10==0): 
        continue 
    sum += i
print(sum)