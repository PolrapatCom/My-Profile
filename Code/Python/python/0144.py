for i in range(26): 
    # print(chr(ord('A')+i),end="")
    pass
a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
aa = "abcdefghijklmnopqrstuvwxyz"
b = "OHNFUMWSVZLXEGCPTAJDYIRKQB"
txt = "pvncNDM[5YH5717Y710G_3I0XY710G_03055505]"
n = len(txt)
print("")
for i in range(n):
    if(txt[i]=="["): 
        print("{",end="")
        continue 
    if(txt[i]=="]"): 
        print("}",end="")
        continue
    if((ord(txt[i])>=ord('0') and ord(txt[i])<=ord('9')) or txt[i] == "_"): 
        print(txt[i],end="")
        continue
    # print(f"{txt[i]} = {ord((txt[i].lower()))-ord('a')}") 
    print(b[ord((txt[i].lower()))-ord('a')],end="")