def binary(l,r,a):
    if(l>=r):
        return l
    mid=(l+r)//2
    if(a[l:mid+1].count("0")<a[mid+1:r].count("1")):
        ans=binary(mid,r,a)
    else:
        ans=binary(l,mid,a)
    return ans
test=int(input())
for tes in range(test):
    s=input() 
    a=list(s)
    ma=0
    for i in range(len(a)):
        ans=binary(i,len(a),a)
        # print(ans)
        if(ans>ma):
            ma=ans
    print(ma)




    
