n = int(input())
temp = []
for i in range(1,n+1):
    if(n%i==0): 
        temp.append(str(i))
ans = ",".join(temp)
print(f"{len(temp)} : {ans}")02