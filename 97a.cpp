#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int res[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        res[a[i]-1]=i;
    }
    for(int i=0;i<n;i++){
        cout<<res[i]+1<<" ";
    }
    cout<<endl;
}