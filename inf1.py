import sys
def solve(n,a,s,dp,i,j):
    if(n==1):
        return 0
    else:
        ans=0;
        if(dp[i][j]!=-1):
            ans = dp[i][j]
        else:
            dp[i][j]= max(solve(n-1,a[1:],s-a[0],dp,i+1,j),solve(n-1,a[:-1],s-a[-1],dp,i,j-1),s-max(a))
            ans=dp[i][j]
        return ans

def GetAnswer(n,a):
    dp=[[-1 for i in range(n+1)] for j in range(n+1)]
    return solve(n,a,sum(a),dp,0,n)

a=[]
n=int(input())
for i in range(n):
    a.append(sys.stdin.readline().strip)
    print(a)

s=sum(a)
print(GetAnswer(n,a))
