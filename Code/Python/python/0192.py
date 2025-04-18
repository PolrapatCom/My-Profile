s = input() ; ans = ""
for i in range(len(s)):
    ans += chr(ord(s[i])-ord('a')+ord('A')) if i%2==1 else s[i]
print(ans)