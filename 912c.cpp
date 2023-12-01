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
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long ind=1;
        long long curr=0;
        long long count=0;
        vector<long long> prefix(n,0);
        prefix[n-1]=a[n-1];
        for(long long i=n-2;i>=0;i--){
            prefix[i]=prefix[i+1]+a[i];
        }
        for(long long i=0;i<n-1;i++){
            count+=a[i];
            if(prefix[i+1]>=0){
                curr+=count*ind;
                ind+=1;
                count=0;
                // cout<<prefix[i+1]<<" "<<a[i]<<endl;
            }
        }
        curr+=(a[n-1]+count)*ind;
        cout<<curr<<endl;
    }
}