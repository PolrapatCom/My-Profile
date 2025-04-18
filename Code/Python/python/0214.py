n= int(input())
arr1 = []
arr2 = []
temp = ""
check = 1
prize = 0
sumi = 0
for j in range(n): 
    temp = input()
    if(len(temp)==6): 
        arr1.append(temp)
    if(len(temp)!=6):
        if(len(temp)==6*n): 
            arr1 = [temp[i:i+6] for i in range(0,len(temp),6)]
            break
        else: 
            check = 0 
            break
if(check):
    for i in range(n): 
        if(arr[i] == "475632"): 
            print("475632 first prize 6000000 bath.")
        else: 
            if(arr[i][0:3] == "548"):
                print(f"{arr[i] 3 digit prefix prize 4000 bath}",end="")
    if(prize): 
        pass
    else:
        print("Sorry you didnt get the prize this time.")
else: 
    print("Try again.")
    
# first prize คือเลข 475632 รางวัลละ 6000000 บาท

# 3 digit prefix prize คิอเลข 548 และ 629 รางวัลละ 4000 บาท

# 3 digit suffix prize คือเลข 255 และ 867 รางวัลละ 4000 บาท

# 2 digit suffix prize คือเลข 82 รางวัลละ 2000 บาท    