#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n,m;
        cin>>n>>m;
        int c=0;
        char temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>temp;
                if(j==m-1 && temp=='R'){
                    c+=1;
                }
                if(i==n-1 && temp=='D'){
                    c+=1;
                }
            }
        }
        cout<<c<<endl;


    }
}