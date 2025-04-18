z = input().split()
n = int(z[1])
lv = 1
maxexp = 0
while(n>0): 
    if(n >= lv * 100): 
        n -= lv * 100
        lv += 1
    else: 
        break 
print(f"Lv : {lv}")
print(f"Exp : {n}/{lv*100}")
print(f"ATK : {lv*10}")
print(f"HP : {lv*100}")