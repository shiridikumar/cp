# def solution(s,z,o):
#     m=[[-1 for i in range(len(s))] for j in range(len(s))]
#     m[0]=0
#     act=s.count("0")
#     for i in range(1,len(s)+1):
#         lp=0;rp=i-1
#         r=0;l=0
#         while(s[lp]=="0"):
#             lp+=1
#             l+=1
#             if(lp==i):
#                 break
#         while(s[rp]=="0" and rp!=lp):
#             rp-=1
#             r+=1
#             if(rp==0):
#                 break
#         m[i]=max(1+m[rp],act-l-r)
#     print(m)
#     return m




#     while(len(s)>0):
#         if(s[0]!="0"):
#             break
#         s.pop(0)
#         z-=1
#     while(len(s)>0):
#         if(s[-1]!="0"):
#             break
#         s.pop(-1)
#         z-=1
#     if(o>=z or len(s)==0):
#         return max(z,o)
#     s=min(solution(s[1:],z,o+1),solution(s[:-1],z,o+1))
#     return s
test=int(input())
for tes in range(test):
    s=input() 
    a=list(s)
    gaps=[]
    act=a.count("0")
    while(len(a)>0):
        if(a[0]=="0"):
            a.pop(0)
            act-=1
        else:
            break
    while(len(a)>0):
        if(a[-1]=="0"):
            a.pop(-1)
            act-=1
        else:
            break
    prev=-1
    for i in range(len(a)):
        if(a[i]=="1"):
            gaps.append(i-prev-1)
            prev=i
    print(gaps)
    lp=0
    rp=len(gaps)-1
    lc=0
    ln=0
    rc=0
    rn=0
    total=0
    dup=act
    while(total<=act and lp<len(gaps)):
        lc+=gaps[lp]
        act-=gaps[lp]
        total+=1
        lp+=1
    print(act,lc,lp)
    act=dup
    total=0
    while(total<=act and rp>=0):
        rc+=gaps[rp]
        act-=gaps[rp]
        total+=1
        rp-=1
    print(act,rc,rp)


    
