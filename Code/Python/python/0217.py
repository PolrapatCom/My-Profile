n = int(input())
s = 0
if(n%2==1): 
    while(n>0):
        s += n
        n -= 2
if(n%2==0): 
    while(n>0):
        s += n
        n -= 1
print(s)