#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int prev=a[0];
        cout<<0<<" ";
        for(int i=1;i<n;i++){
            int ans=(prev^a[i])&prev;
            cout<<ans<<" ";
            prev=a[i]^ans;
        }
        cout<<endl;


    }
}