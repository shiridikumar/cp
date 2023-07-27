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
            a[i]=pow(10,a[i]);
        }
        k=k+1;
        long long s=0;
        for(long long i=0;i<n-1;i++){
            if(k<=(a[i+1]-a[i])/a[i]){
                s+=k*a[i];
                k=0;
                break;
            }
            else{
                s+=(a[i+1]-a[i]);
                k-=(a[i+1]-a[i])/a[i];
            }
        }
        // cout<<k<<endl;

        s+=k*a[n-1];
        cout<<s<<endl;
    }
}