#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a[n];
        long long b[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n;i++){
            cin>>b[i];
        }
        vector<long long> vec;
        map<int,vector<int> >  mp;
        for(long long i=0;i<n;i++){
            mp[b[i]-a[i]].push_back(i);
        }

        cout<<mp.begin()->second.size()<<endl;
        for(long long i=0;i<mp.begin()->second.size();i++){
            cout<<mp.begin()->second[i]+1<<" ";
        }
        cout<<endl;



    }
}