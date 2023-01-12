t=int(input())
for tes in range(t):
    n=int(input())
    first=(n*(n+1)*(4*n-1))//6
    print(first*2022%(10**9+7))