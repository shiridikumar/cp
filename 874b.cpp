#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n,0);
        map<long long,vector<long long> > mp;
        vector<long long> b(n,0);
        for(long long i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]].push_back(i);
        }
        for(long long i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<long long> res(n,0);
        for(long long i=0;i<n;i++){
            long long ind=mp[a[i]][mp[a[i]].size()-1];
            res[ind]=b[i];
            mp[a[i]].pop_back();
        }
        for(long long i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;



    }
}