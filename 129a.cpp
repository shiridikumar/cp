#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int m,n;
        cin>>m;
        int a[m];
        int ma1=INT_MIN,mi1=INT_MAX;
        for(int i=0;i<m;i++){
            cin>>a[i];
            if(a[i]>ma1){
                ma1=a[i];
            }
            if(a[i<mi1]){
                mi1=a[i];
            }

        }
        cin>>n;
        int b[n],ma2=INT_MIN,mi2=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]>ma2){
                ma2=b[i];
            }
            if(b[i]<mi2){
                mi2=b[i];
            }

        }
        if(ma1>ma2){
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        if(ma2>ma1){
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        if(ma2==ma1){
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }

        
       

    }
}