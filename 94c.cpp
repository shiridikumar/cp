#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int ans=n;
        for(int i=n-1;i>=1;i--){
            ans=ceil((ans+(i))/2.0);
        }
        cout<<ans<<endl;
        ans=n;
        for(int i=n-1;i>=1;i--){
            cout<<ans<<" "<<i<<endl;
            ans=ceil((ans+(i))/2.0);
        }
    }
}