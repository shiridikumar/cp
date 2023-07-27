#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int curr=INT_MIN;
        int a,b;
        int ind=0;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a<=10 && b>curr){
                curr=b;
                ind=i+1;
                // cout<<ind<<endl;
                
            }
        }
        cout<<ind<<endl;


    }
}