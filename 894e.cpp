#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,m,d;
        cin>>n>>m>>d;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> prefix(n,0);
        long long ma=0;
        priority_queue <long long, vector<long long>, greater<long long> > pq;
        long long curr=0;
        for(long long i=0;i<n;i++){
            if(a[i]>0){
                pq.push(a[i]);
                curr+=a[i];
                if(pq.size()>m){
                    curr-=pq.top();
                    pq.pop();
                }
            }
            prefix[i]=curr-d*(i+1);
            ma=max(prefix[i],ma);
        }
        // for(long long i=0;i<n;i++){
            // cout<<prefix[i]<<" ";
        // }
        cout<<ma<<endl;




    }
}