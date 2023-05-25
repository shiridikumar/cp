#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> prefix(n,0);
        prefix[0]=a[0];
        map<long long,long long> vis;
        for(long long i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
            vis[a[i]]=2;
        }
        long long su=prefix[n-1];
        long long ma=LONG_LONG_MIN;
        // for(long long i=0;i<n;i++){

        // }
        for(long long i=0;i<n-1;i++){

            ma=max(gcd(prefix[i],su-prefix[i]),ma);
        }
        cout<<ma<<endl;


    }
}