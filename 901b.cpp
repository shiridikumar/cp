#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,p;
        cin>>n>>p;
        long long a[n];
        long long b[n];
        priority_queue <pair<long long,long long >, vector<pair<long long,long long> >, greater<pair<long long,long long> > > pq; 

        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n;i++){
            cin>>b[i];
            pq.push(make_pair(b[i],a[i]));
        }

        long long rem=n-1;
        pair<long long,long long> tp=pq.top();
        long long ans=p;
        pq.pop();
        long long curr=tp.second;
        long long currcost=tp.first;
        vector<pair<long long,long long> > vec;
        vec.push_back(tp);
        long long ind=0;
        while(rem>0){
            ans+=min(currcost,p);
            pair<long long,long long> temp=pq.top();
            vec.push_back(temp);
            pq.pop();

            curr-=1;
            if(curr==0){
                ind+=1;
                if(ind>=vec.size()){
                    curr=1;
                    currcost=p;
                }
                else{
                    curr=vec[ind].second;
                    currcost=vec[ind].first;
                }
            }
            rem-=1;
        }
        cout<<ans<<endl;

    }
}