#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long w,h;
        cin>>w>>h;
        long long k;
        cin>>k;
        long long x1[k];
        for(long long i=0;i<k;i++){
            cin>>x1[i];
        }
        long long k1=k;
        cin>>k;
        long long x2[k];
        for(long long i=0;i<k;i++){
            cin>>x2[i];
        }
        long long k2=k;

        cin>>k;
        long long y1[k];
        for(long long i=0;i<k;i++){
            cin>>y1[i];
        }

        long long k3=k;
        cin>>k;
        long long y2[k];
        for(long long i=0;i<k;i++){
            cin>>y2[i];
        }
        long long k4=k;

        long long ma=max((x1[k1-1]-x1[0])*h,(x2[k2-1]-x2[0])*h);
        long long ma2=max((y1[k3-1]-y1[0])*w,(y2[k4-1]-y2[0])*w);
        // cout<<ma<<"  ===== "<<ma2<<endl;
        cout<<max(ma,ma2)<<endl;
    }
}