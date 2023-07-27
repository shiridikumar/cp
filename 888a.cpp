#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,m,k,h;
        cin>>n>>m>>k>>h;
        long long a[n];
        long long count=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if( a[i]!=h && abs(a[i]-h)%k==0 && abs(a[i]-h)/k<m){
                // cout<<a[i]<<" "<<endl;
                count+=1;
            }
        }
        cout<<count<<endl;


    }
}