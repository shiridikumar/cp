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
        sort(a,a+n);
        int mid=n/2;
        int cost=0;
        for(int i=0;i<mid;i++){
            cost+=a[n-i-1]-a[i];
        }
        cout<<cost<<endl;


    }
}