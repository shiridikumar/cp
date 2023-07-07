#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long s=0;
        while(n>0){
            s+=n;
            n=n/2;
        }
        cout<<s<<endl;


    }
}