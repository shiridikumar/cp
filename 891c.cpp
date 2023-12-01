#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin >>n;
        long long a[n];
        long long temp;
        map<long long ,long long> mp;
        for(long long i=0;i<(n*(n-1))/2;i++){
            cin>>temp;
            mp[temp]+=1;
        }
        long long exp=n-1;
        vector<long long> arr;
        long long last=0;

        for(auto &it: mp){
            while(it.second>0){
                // cout<<it.second<<" **  "<<exp<<endl;

                for(long long i=0;i<exp;i++){
                    it.second-=1;
                }
                arr.push_back(it.first);
                exp-=1;
            }
            last=it.first;
        }

        arr.push_back(last);
        for(auto &it : arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}