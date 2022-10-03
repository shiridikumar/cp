#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        vector<int> c(n,0);
        cout<<2<<endl;
        int ind;
        for(int i=1;i<=n;i++){
            if(c[i-1]==0){
                ind=i;
                while(ind<=n){
                    cout<<ind<<" ";
                    c[ind-1]=1;
                     ind*=2;
                }
            }
        }
        cout<<endl;
    }
}