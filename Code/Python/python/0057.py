from collections import Counter
votes = [
  "fish",
  "rich",
  "rich",
  "rich",
  "fish"
]
n = len(votes)
cnt = Counter(votes)
maxi = -1
ans = ""
for key,value in cnt.items(): 
    if(value>maxi): 
        maxi = value
        ans = key
print(ans)