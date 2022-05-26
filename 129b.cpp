#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long test;
    cin>>test;
    for(long t=0;t<test;t++){
        long n;
        cin>>n;
        long a[n];
        for(long i=0;i<n;i++){
            cin>>a[i];
        }
        long m;
        cin>>m;
        long b[m];
        long s=0;
        for(long i=0;i<m;i++){
            cin>>b[i];
            s+=b[i];
        }
        cout<<a[s%n]<<endl;
        

    }
}