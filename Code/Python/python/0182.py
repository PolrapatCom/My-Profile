a, b = input().split()
a = int(a)
check = 1
if(a>=0 and a<=99): 
    pass
else: 
    print("Sorry we not found that Table number :(")
    check = 0
n = len(b)
for i in range(n): 
    if(b[i] == "F" or b[i] == "B" or b[i] == "R" or b[i] == "S"): 
        pass
    elif(check): 
        print("Sorry we do not have D in our menu")
        check = 0
        break
if(check): 
    print(f"Table {a} order {b}, Please Wait your order from chef :)")
#  รูปเเบบ Input

# แต่ละเมนูก็จะมี ข้าวผัด (F), ข้าวผัดกะเพราหมูสับ (B), หนูหัน (R), ซุปไก่สกัด (S) เช่น ข้าวผัด จะแทนด้วย F
# เลขโต๊ะของร้าน Mr. Mice มีตั้งแต่ 0 - 99
# รูปเเบบ Output

# ให้แสดงข้อความ เลขโต๊ะ และรายการอาหารที่สั่ง "Table 0 order FBRRB, Please Wait your order from chef :)
# ถ้าไม่มีหมายเลขโต๊ะแสดงข้อความว่า "Sorry we not found that Table number :(" 
# Sorry we do not have D in our menu