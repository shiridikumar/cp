s=input()
def answer(s):
    from collections import Counter
    c=Counter(input)
    ma=max(c.values())
    count=0
    ans="0"
    for i in c:
        if(c[i]==ma):
            count+=1
            ans=i
    if(count>1):
        return "0"
    else:
        return ans

print(answer(s))
