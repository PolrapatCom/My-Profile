s = ["Dog","Cat","Chicken","Duck","Cow","Snake","Bird"]
n = [4,4,2,2,4,0,2]
a = []
for i in range(3): 
    temp = input().split()
    a.append(temp)
cnt = 0
for i in range(3): 
    for j in range(7): 
        if(s[j] == a[i][0]): 
            cnt += n[j] * int(a[i][1])
print(cnt)
# ข้อมูลเพิ่มเติม เผื่อใครไม่รู้
# สุนัขมี 4 ขl
# แมวมี 4 ขา
# ไก่มี 2 ขา
# เป็ดมี 2 ขา
# วัวมี 4 ขา
# งู ไม่มีขา
# นกมี 2 ขา