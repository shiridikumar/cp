#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
        // cout<<endl;
        int mi=INT_MAX;
        if(n==1){
            mi=a[1]-a[0];
        }
        for(int i=n-1;i<2*n-n;i++){
            mi=min(mi,a[i+1]-a[i]);
        }
        cout<<mi<<endl;

    }
}