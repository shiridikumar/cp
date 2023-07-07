#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long temp;
        map<long long,long long> mp;
        for(long long i=0;i<n;i++){
            cin>>temp;
            mp[temp-(i+1)]+=1;
        }
        long long s=0;
        for(auto &it : mp){
            s+=(it.second*(it.second-1))/2;
        }
        cout<<s<<endl;
    }
}