#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        if(n%2==0){
            cout<<1<<" "<<n/2<<endl;
        }
        else{
            cout<<-1<<endl;
        }


    }
}