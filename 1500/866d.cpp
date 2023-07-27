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
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long temp=1;
        long long curr=1;
        for(long long i=0;i<n-1;i++){
            if(a[i+1]-a[i]>k){
                temp=0;
            }
            temp+=1;
            curr=max(temp,curr);
        }
        // // count+=1;
        // long long count=0;
        // for(long long i=0;i<n-1;i++){
        //     if(a[i+1]-a[i]>k){
        //         count=i+1;
        //         // break;

        //     }
        // }
        // long long count1=0;
        // for(long long i=n-1;i>0;i--){
        //     if(a[i]-a[i-1]>k){
        //         count1=n-i;
        //     }
        // }
        // cout<<endl;
        cout<<n-curr<<endl;


    }
}