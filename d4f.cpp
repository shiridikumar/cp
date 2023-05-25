#include<bits/stdc++.h>
using namespace std;
long long t,n,q,a[200005],b[200005];
inline long long digit_sum(long long x) 
{
    long long sum = 0;
    while(x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
inline long long read() 
{
    long long x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int main() 
{
    t=read();
    while(t--) 
    {
        n=read();q=read();
        for(long long i=1;i<=n;i++) 
        {
            a[i]=read();
            b[i]=digit_sum(a[i]);
        }
        while(q--) 
        {
            long long op=read(),x=read();
            if(op==1) 
            {
                long long y=read();
                for(long long i=x;i<=y;i++) 
                    a[i]=b[i]=digit_sum(a[i]);
            } 
            else 
                cout<<a[x]<<endl;
        }
    }
    return 0;
}
