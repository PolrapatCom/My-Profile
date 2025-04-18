# 'Sharpness'    จะ max ที่ tier 5 (V)
# 'Knockback'    จะ max ที่ tier 2 (II)
# 'Protection'   จะ max ที่ tier 4 (IV)
# 'FireAspect'   จะ max ที่ tier 2 (II)
# 'Fortune'      จะ max ที่ tier 3 (III)
# 'Power'        จะ max ที่ tier 5 (V)
# 'Unbreaking'   จะ max ที่ tier 3 (III)
# 'Looting'      จะ max ที่ tier 3 (III)
a = input().split()
b = input().split()
c = ["I","II","III","IV","V"]
c1 , c2 = 0 , 0
for i in range(5): 
    if(a[1] == c[i]): 
        a.append(i+1)
        c1 = 1
    if(b[1] == c[i]): 
        b.append(i+1)
        c2 = 1
if(a[0]==b[0]): 
    i = 0
    if(a[2]==b[2]): 
        a[2] += 1
    if((a[i] == 'Sharpness' and a[2] > 5) or (a[i] == 'Protection' and a[2] > 4) or ((a[i] == 'Fortune' or a[i] == 'Unbreaking' or a[i] == 'Looting') and a[2] > 3) or ((a[i] == 'Knockback' or a[i] == 'FireAspect') and a[2] > 2)): 
        print("Max tier reached")
    elif((b[i] == 'Sharpness' and b[2] > 5) or (b[i] == 'Protection' and b[2] > 4) or ((b[i] == 'Fortune' or b[i] == 'Unbreaking' or b[i] == 'Looting') and b[2] > 3) or ((b[i] == 'Knockback' or b[i] == 'FireAspect') and b[2] > 2)): 
        print("Max tier reached")
    else: 
        print(f"{a[i]} {c[a[2]-1]}"  if(a[2]==b[2]) else f"{a[i]} {c[max(a[2],b[2])-1]}")
else: 
    print("Enchant is not possible")