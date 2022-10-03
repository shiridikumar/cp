#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long t=0;t<test;t++){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long c=0;
        for(long long i=1;i<n-1;i++){
            if(a[i-1]+a[i+1]<a[i]){
                c+=1;
            }
        }
        if(k==1){
            cout<<(n-1)/2<<endl;
        }
        else{
            cout<<c<<endl;
        }
        
    }
}