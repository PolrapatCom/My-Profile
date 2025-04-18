n = int(input())
a = []

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
i = 2
while(True):
    if(isprime(i)): 
        a.append(i)
    if(i == n): 
        break
    i += 1
print(len(a) if a[-1] == n else a[-1])
# print(a)

#time limit exceeded