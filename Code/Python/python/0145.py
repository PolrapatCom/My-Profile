txt = "128 322 353 235 336 73 198 332 202 285 57 87 262 221 218 405 335 101 256 227 112 140"
code = list(map(int,txt.split()))
print(code)
n = len(code)
ans = ""
for i in range(n):
    temp = code[i]%37
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