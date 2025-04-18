a = input()
n = len(a)
for i in range(n):
    if(i%3==2): 
        continue 
    if(i%3==0): 
        print(a[i+2],end="")
    print(a[i],end="")
    