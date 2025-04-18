txt = "432 331 192 108 180 50 231 188 105 51 364 168 344 195 297 342 292 198 448 62 236 342 63 "
code = list(map(int,txt.split()))
print(code)
n = len(code)
ans = ""
def moddy(num): 
    for i in range(1,100): 
        if((num*i)%41==1): 
            return i
for i in range(n):
    temp = moddy(code[i])
    temp -= 1
    if(temp>=26 and temp<=35): 
        print(temp-26,end="")
        ans += str(temp-26)
        continue
    if(temp==36): 
        print("_",end="")
        ans += "_"
        continue
    print(chr(temp+ord('A')),end="")
    ans += str(chr(temp+ord('A')))
print("")
print(f"picoCTF{{{ans}}}")