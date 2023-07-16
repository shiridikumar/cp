#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        int score=0;
        for(int i=n-2*k;i<n-k;i++){
            // cout<<i<<" ---  "<<k+i<<endl;
            score+=a[i]/a[k+i];

        }
        for(int i=0;i<n-2*k;i++){
            score+=a[i];
        }
        cout<<score<<endl;
    }
}