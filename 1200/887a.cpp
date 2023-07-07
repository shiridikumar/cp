#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> gp;
        int ans=0;
        for(int i=0;i<n-1;i++){
            gp.push_back(abs(a[i]-a[i+1]));
            ans+=abs(a[i]-a[i+1]);
        }
        sort(gp.begin(),gp.end(),greater<int>());
        for(int i=0;i<min((int)gp.size(),k-1);i++){
            // cout<<gp[i]<<"----"<<endl;
            ans-=gp[i];
        }
        cout<<ans<<endl;



    }
}