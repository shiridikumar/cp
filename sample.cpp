#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    
    for(int t=0;t<test;t++){
        long long n,z;
        long long curr=INT_MIN;
        cin>>n>>z;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
            curr=max(a[i]|z,curr);

        }
        // cout<<curr<<"------"<<endl;
        cout<<(curr)<<endl;


       

    }
}