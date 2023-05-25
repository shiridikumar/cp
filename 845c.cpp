#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int minlb=INT_MAX;
        int maxlb=INT_MIN;
        int lp=n-1;
        int all=m;
        vector<int> vis(m+1,0);
        for(int i=n-1;i>=0;i--){
            int div=a[i]%m;
            while(div>0){
                vis[div]=1;
                div=div/2;
            }
            
        }



    }
}