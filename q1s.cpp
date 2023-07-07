#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solver(int a[],int k,int n){
    int great=0;
    int less=0;
    vector<int> g;
    vector<int> l;
    for(int i=0;i<n;i++){
        if(a[i]>k){
            great+=1;
            g.push_back(a[i]-k);
        }
        if(a[i]<k){
            less+=1;
            l.push_back(k-a[i]);
        }
    }
    int mid=n/2+1;
    int ans=0;
    if(great>n-mid){
        sort(g.begin(),g.end());
        int num=great-(n-mid);
        for(int i=0;i<num;i++){
            ans+=g[i];
        }
    }
    else{
        sort(l.begin(),l.end());
        int num=less-(n-mid);
        for(int i=0;i<num;i++){
            ans+=l[i];
        }
    }
    return ans;
}

int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k;
        cin>>k;
        int ans=solver(a,k,n);
        cout<<ans<<endl;


    }
}