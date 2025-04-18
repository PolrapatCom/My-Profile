a =input().split(",")
b = ["Man", "Non" , "Miv"]
atoz = [0,0,0]
AtoZ = [0,0,0]
special = [0,0,0]
num = [0,0,0]
sum = [0,0,0]
for i in range(3): 
    if(len(a[i])>=6 and len(a[i])<=12):
        for j in range(len(a[i])): 
            if(ord(a[i][j])>=ord('a') and ord(a[i][j])<=ord('z')): 
                atoz[i] += 1
            if(ord(a[i][j])>=ord('A') and ord(a[i][j])<=ord('Z')): 
                AtoZ[i] += 1
            if(ord(a[i][j])>=ord('0') and ord(a[i][j])<=ord('9')): 
                num[i] += 1
            if((a[i][j])== "$" or (a[i][j])== "#" or (a[i][j])== "@"): 
                special[i] += 1
    else: 
        continue
    sum[i] = atoz[i] + AtoZ[i] + special[i] + num[i]
ans = []
cnt = 0
for i in range(3): 
    if(atoz[i] and AtoZ[i] and special[i] and num[i]): 
        ans.append([sum[i],b[i]])
        cnt = i
ans.sort(reverse=True)
# cnt = 0
# for i in range(3):
#     if(ans[0][0]==sum[i]): 
#         cnt = i
#         break
print(f"{a[cnt]} ({ans[0][1]})")
# print(a)
# print(atoz)
# print(AtoZ)
# print(special)
# print(num)
# print(sum)
# print(ans)

# ให้หาว่าใครตั้ง Password ที่ยากที่จะถูก hack จากผู้ไม่ประสงค์ดีมากที่สุด ระหว่าง Man, Non และ Miv ตามลำดับ โดยมีเกณฑ์ในการตั้ง Password ที่ดีดังนี้

# ตัวอักษร a-z อย่างน้อย 1 ตัว
# ตัวเลข 0-9 อย่างน้อย 1 ตัว
# ตัวอักษร A-Z อย่างน้อย 1 ตัว
# ตัวอักษรพิเศษ $ หรือ # หรือ @ อย่างน้อย 1 ตัว
# ความยาวไม่น้อยกว่า 6 ตัว และ ไม่มากกว่า 12 ตัว