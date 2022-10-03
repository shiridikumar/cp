#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int flag=1;
    int rows[m];
    int cols[n];
    for(int i=0;i<m;i++){
        flag=1;
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]==0){
                flag=0;
            }
        }
        if(flag==1){
            rows[i]=1;
        }
        else{
            rows[i]=0;
        }
    }
    flag=1;
    for(int i=0;i<n;i++){
        flag=1;
        for(int j=0;j<m;j++){
            if(a[j][i]==0){
                flag=0;
                break;
            }
        }
        // cout<<cols[i]<<"********"<<endl;
        if(flag==1){
            cols[i]=1;
        }
        else{
            cols[i]=0;
        }
    }
    int end=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((a[i][j]==1 && rows[i]!=1 && cols[j]!=1) || (a[i][j]==0 && rows[i]==1 && cols[j]==1)){
                end=1;
                break;

            }
        }
    }
    if(end==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i] && cols[j]){
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }

}