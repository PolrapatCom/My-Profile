a = []
while(True): 
    s = input()
    if(ord(s)>=ord('0') and ord(s)<=ord('9')): 
        a.append(int(s))
    else:
        break
n = len(a)
check = True
for i in range(n): 
    if(a[i]>=1 and a[i]<=5): 
        pass
    else: 
        print("Error! Not have this floor")
        check = False
        break
a.sort()
if(check): 
    print("OK! Wait please\n---------------\nLift is arriving!")
    for i in range(n): 
        print(f"""---------------
Lift is going up!
---------------
Lift has reached the {"1st" if a[i] == 1 else "2nd" if a[i] == 2 else "3rd" if a[i] == 3 else f"{a[i]}th"} floor!""")
