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
        int eff=0;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
            eff+=a[i];
        }
        cout<<-1*eff<<endl;


    }
}