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
        int odd=1;
        int even=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                even=0;
            }
            if(a[i]%2!=1){
                odd=0;
            }

        }
        if(n%2==0){
            if(odd==1 || even==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            if(even==1){
                cout<<"NO"<<endl;

            }
            else{
                cout<<"YES"<<endl;
            }
        }

    }
}