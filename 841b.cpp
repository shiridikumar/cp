#include<iostream>
#include<bits/stdc++.h>
#include<math.h> 
const long long mod =  1e9 + 7;
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long first=((n*((n+1)%mod))%mod*(((4*n)%mod-1%mod)%mod));
        // long long ans=((first+second+third)*2022)%mod;
        cout<<((first)%mod*337)%mod<<endl;


    }
}