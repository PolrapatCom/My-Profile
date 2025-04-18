a = [0.12,0.5,0.06]
b = []
num = 0
for i in range(3): 
    c , d = input().split(":")
    num += a[i] * int(d) 
print(num*3)

    
