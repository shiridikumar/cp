n=int(input())
m=int(input())
k=int(input())
a=[[int(i) for i in input().split()] for j in range(m)]
# dp=[[-1 for i in range(n+1)]for j in range(m+1) ]
# dp[m][n]=1
# i=m
# j=n-1
# d={}

def solution(a,n,m,k,orig):
  # print(m,n,k)
  if(k==0):
    return 1

  if(k<0):
    return 0
  a1,a2,b1,b2=0,0,0,0
  if(n<(len(a[0])) and m<len(a)):
    # print(a[m][n],end="")
    a1=solution(a,n+1,m,k-len(str(a[m][n])),orig)
    # print("",end="")
    a2=solution(a,n+1,m,orig,orig)
    # print(a[m][n],end="")
    b1=solution(a,n,m+1,k-len(str(a[m][n])),orig)
    # print("",end="")
    b2=solution(a,n,m+1,orig,orig)
  # print(a1,a2,b1,b2,"**************",m,n,k)
  return a1+a2+b1+b2
  
ans=solution(a,0,0,k,k)
print(ans//2,"**************")


"""
1 2 32
4 5 6
7 8 9
"""


