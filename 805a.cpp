#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<" "<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}