#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long t=0;t<test;t++){
        long long n;
        cin>>n;
        long long a[n];
        long long flag=-1;
        long long s=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];

        }
        if(s==0){
            flag=3;
        }
        long long lp=0;
        while(a[lp]==0 && lp<n){
            lp++;
        }

        long long ans=0;
        // cout<<lp<<"************"<<endl;
        for(long long i=lp;i<n;i++){
            if(a[i]==0){
                flag=1;
            }
            // cout<<a[lp]<<" ";
            if(a[i]!=0 && flag==1){
                flag=2;
                // cout<<"asdasda"<<endl;
                break;
            }
        
        }
    //    cout<<endl;
    // if(t==0){
    //     cout<<"--------------------------------"<<endl;
    // }
        if(flag==3){
            cout<<0<<endl;
        }
        if(flag==2){
            cout<<2<<endl;
        }
        if(flag==1 || flag==-1){
            cout<<1<<endl;
        }
    }
}