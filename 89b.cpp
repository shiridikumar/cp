#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<j;
            if(i!=0){
                cout<<" ";
            }
        }
        for(int j=i-1;j>=0;j--){
            cout<<j;
            if(j!=0){
                cout<<" ";
            }
        }
        cout<<endl;

    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=n-i;j++){
            cout<<j;
            if(i!=n){
                cout<<" ";
            }

        }
        for(int j=n-i-1;j>=0;j--){
            cout<<j;
            if(j!=0){
                cout<<" ";
            }
        }

        cout<<endl;
    }
}