#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long k=1;
        long long mod=998244353;
        vector<long long> z(n+1,0);
        z[0]=1;
        for(long long i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                z[i]=(2%mod*z[i-1]%mod)%mod;
            }
            else{
                z[i]=1;
            }
            k=(k%mod+z[i]%mod)%mod;
        }

        cout<<k<<endl;


    }
}