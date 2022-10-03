#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long  long test;
    cin>>test;
    for(long  long t=0;t<test;t++){
        long  long n;
        cin>>n;
        long  long a[n];
        for(long  long i=0;i<n;i++){
            cin>>a[i];
        }
        long  long m;
        cin>>m;
        long  long b[m];
        long  long s=0;
        for(long  long i=0;i<m;i++){
            cin>>b[i];
            s+=b[i];
        }
        cout<<a[s%n]<<endl;
    }
}

