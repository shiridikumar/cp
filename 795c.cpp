#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,k;
        cin>>n>>k;
        // int a[n];
        string a;
        cin>>a;
        vector<int> l;
        int prev=-1;
        for(int i=0;i<n;i++){
            if(a[i]=='1'){
                if(prev!=-1){
                    l.push_back(i-prev-1);
                }
                prev=i;
            }
        }
        if(prev!=-1){
            l.push_back(n-prev-1);
        }
        for(auto it=l.begin();it!=l.end();it++){
            cout<<(*it)<<" ";
        }
        cout<<endl;


       

    }
}