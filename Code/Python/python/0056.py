def ok(s): 
    if(s=="a" or s=="e" or s=="i" or s=="o" or s=="u"): 
        return True

word = "aespa"
n = len(word)
yes = 0
for i in range(1,n):
    if(ok(word[i]) and ok(word[i-1])): 
        yes = 1
        break
if(yes): 
    print("yes")
else: 
    print("no")