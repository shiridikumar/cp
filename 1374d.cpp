#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        map<long long,long long > mp;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%k!=0){
                mp[k-a[i]%k]+=1;
            }
        }
        long long s=0;
        for(auto &it : mp){
            s=max(1+it.first+(it.second-1)*k,s);
        }
        cout<<s<<endl;

    


    }
}