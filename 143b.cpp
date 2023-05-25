#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        int l,r;
        int ub=INT_MIN,lb=INT_MAX;
        int temp=n;
        for(int i=0;i<n;i++){
            cin>>l>>r;
            if(l>k || r<k){
                temp-=1;
            }
            else{
                ub=max(l,ub);lb=min(r,lb);
            }
        }
        if(temp<=0){
            cout<<"NO"<<endl;
        }
        else{
            if(ub==lb){
                cout<<"YES"<<endl;  
            }
            else{
                cout<<"NO"<<endl;
            }
        }



    }
}