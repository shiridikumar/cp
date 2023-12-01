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
        vector<int> x;
        int mi=INT_MAX;
        int diff=0;
        for(int i=0;i<n-1;i++){
            diff+=(a[i+1]-a[i])+(a[n+i+1]-a[n+i]);
        }

        cout<<diff<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" "<<a[n+i]<<endl;
        }




    }
}