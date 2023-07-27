#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a[n];
        long long b[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
            // cin>>b[i];
        }
        sort(b,b+n);
        // map<long long,long long> mp;
        // for(long long i=0;i<n;i++){
        //     mp[b[i]]=i;
        // }
        long long flag=0;
        for(long long i=0;i<n;i++){
            if(a[i]%2 !=b[i]%2){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }





    }
}