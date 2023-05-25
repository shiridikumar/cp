#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long x,k;
        cin>>x>>k;
        if(x%k==0){
            cout<<2<<endl;
            cout<<x+1<<" "<<-1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
}