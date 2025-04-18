s = """------------------------------
Student grade report program
"""

id = "660101"
a , b = list(map(int,input().split()))

def grade(k): 
    if(k>=80): 
        return "A"
    if(k>=70): 
        return "B"
    if(k>=60): 
        return "C"
    if(k>=50): 
        return "D"
    return "F"

for i in range(a,b+1,1):
    temp = id
    c = int(input())
    if(i >= 0 and i <= 9): 
        temp += "00" + str(i)
    elif(i >= 10 and i <= 99): 
        temp += "0" + str(i) 
    else: 
        temp += "" + str(i)
    s += f"Student {temp} got grade {grade(c)}\n"
    
s += """------------------------------"""
print(s)