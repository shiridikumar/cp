def solution(n,a):
    s=0;c=0
    curr=0
    max=0
    for i in range(1,n):
        if(a[i]>0):
            s+=a[i]
            c+=1
    if(n<2):
        return 1
    else:
        if(s+a[0]>a[0]+a[1]):
            return c+1
        else:
            return 2
    
n=int(input())
a=list(map(int,input().split()))

k=solution(n,a)
print(k)
    
