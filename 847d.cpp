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
        map<long long,long long> mp;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]+=1;
        }
        sort(a,a+n);
        long long it=a[0];
        long long total=mp[a[0]];
        long long curr=total;
        long long currsets=total;
        while(curr <n){
            //  cout<<a[curr]<<" "<<it+1<<" "<<endl;
            if(it+1==a[curr]){
                if(mp[it+1]){
                    long long co=mp[it+1];
                    // cout<<co<<" "<<total<<" " <<it+1<<endl;
                    if(co>currsets){
                        total+=co-currsets;
                        currsets=co;
                    }
                    else{
                        currsets=co;
                    }
                    curr+=co;
                }
                else{
                    mp[it+1]=0;
                }
                it++;
            }
            else{
                total+=mp[a[curr]];
                currsets=mp[a[curr]];
                it=a[curr];
                curr+=mp[a[curr]];
            }
        }
        // cout<<endl;
        cout<<total<<endl;
    }
}