#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){

        long long n;
        cin>>n;
        long long z=sqrt(2*n);
        z-=3;
        while((z*(z+1))/2<=n){
            z+=1;
        }
        cout<<n+z*(3-z)/2<<endl;
    }
}