#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long modFact(long long n, long long p)
{
    long long result = 1;
    for (long long i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}

int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long mod=10e9+7;
        long long k=0;
        
        long long ans=(n%mod*(n-1)%mod)%mod;
        k=(modFact(n,mod)%mod*ans%mod)%mod;
        cout<<k%mod<<endl;
    }
}