#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,m;
        cin>>n>>m;
        if(m-1>n){
            cout<<n+1<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(j<=n){
                        cout<<(i+j)%(n+1)<<" ";
                    }
                    else{
                        cout<<j<<" ";

                    }
                }
                cout<<endl;
            }
        }
        else{
            if(m==1){
                cout<<0<<endl;
            }
            else{
                cout<<m<<endl;
            }
            for(int i=0;i<m-1;i++){
                for(int j=0;j<m;j++){
                    cout<<(i+j)%m<<" ";
                }
                cout<<endl;
            }
            for(int i=0;i<n-m+1;i++){
                for(int j=0;j<m;j++){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
    }
}