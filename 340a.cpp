#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int k=0;
    int mod=5;
    while(mod>=1 && x>0){
        k+=x/mod;
        x=x%mod;
        mod-=1;
    }
    cout<<k<<endl;

}