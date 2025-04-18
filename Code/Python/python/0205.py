s = ["I","V","X","L","C","D","M"] 
n = [1,5,10,50,100,500,1000] 
num = int(input())
while(num): 
    temp = -1
    for i in n: 
        temp = num/i