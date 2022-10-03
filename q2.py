n,d,m=map(int,input().split())
a=list(map(int,input().split()))
costs=list(map(int,input().split()))

def solution(start,index,d,costs,m):
    if(index>=len(d)):
        
        return 0
    rm=0
    if(m>0):
        rm=min(solution(start,index+1,d,costs,m-1),(d[index]-d[start])*(costs[start])+solution(index,index+1,d,costs,m))
    else:
        rm=(d[index]-d[start])*costs[start]+(solution(index,index+1,d,costs,m))
    # print(index,start,rm,m)
    return rm 


maxb=0
s=0
ind=n
new=[]
for i in range(len(a)):
    if(a[i]>d):
        ind=i
        break
    new.append(a[i])
if(new[-1]!=d):
    new.append(d)
c=[]

k=solution(1,2,new,costs,m)+(new[1]-new[0])*costs[0]
print(k)
