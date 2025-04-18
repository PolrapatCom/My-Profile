check = 1
n = int(input())

def isprime(j):
    if(j==2): 
        return True
    idk = 0
    for i in range(2,j): 
        if(j%i==0): 
            idk = 1
    if(idk): 
        return False
    return True

for i in range(n-1,1,-1): 
    if(isprime(i)): 
        print(i)
        check = 0
        break
    
if(check):
    print("None")