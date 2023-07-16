#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int a,b;
        cin>>a>>b;
        if(min(a,b)==1){
            cout<<a+b<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}