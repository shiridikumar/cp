#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<a-c+1;i++){
            cout<<1;
        }
        for(int i=0;i<c-1;i++){
            cout<<0;
        }
        cout<<" "<<1;
        for(int i=0;i<b-1;i++){
            cout<<0;
        }
        cout<<endl;
    }
}