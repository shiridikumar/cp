#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,s,r;
        cin>>n>>s>>r;
        int rem=r/(n-1);
        int re=r%(n-1);
        // cout<<rem<<"-------------" <<re<<endl;
        int other=s-r;
        // cout<<"_____________"<<endl;
        for(int i=0;i<re;i++){
            cout<<rem+1<<" ";
        }
        for(int i=re;i<n-1;i++){
            cout<<rem<<" ";
        }
        cout<<s-r<<endl;
    }
}