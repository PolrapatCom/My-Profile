n = 0
a = int(input())
while(True): 
    if(a%400==0):
        n = 1
        # print("one")
    elif(a%100==0): 
        n = 0
        # print("two") 
    elif(a%4==0): 
        n = 1
        # print("three") 
    # print("break")
    break    
if(n):
    print("Leap Year")
else: 
    print("Not a Leap Year")
# print(n)