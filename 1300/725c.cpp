#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,l,r;
        cin>>n>>l>>r;
        vector<long long> a(n,0);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long rp=n-1;
        long long lp=0;
        long long count=0;
        for(auto it=a.begin();it!=a.end();it++){
            lp=lower_bound(it+1,a.end(),l-*it)-a.begin();
            rp=upper_bound(it+1,a.end(),r-*it)-a.begin();
            count+=rp-lp;
        }
        cout<<count<<endl;


    }
}