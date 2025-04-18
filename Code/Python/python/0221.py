a = input()
sumi = 0
for i in a: 
    sumi += ord(i)**len(a)
sumi = str(sumi)
while(len(sumi)>1):
    temp = "0" 
    for i in ((sumi)):
         temp += "+" + i
    sumi = str(eval(temp))
    
    # print(temp)
print(sumi)        