#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,k,a,b;
        cin>>n>>k>>a>>b;
        long long min_a=LONG_LONG_MAX;
        long long min_b=LONG_LONG_MAX;
        vector<pair<long long,long long> >  vec;
        for(long long i=0;i<n;i++){
            long long x,y;
            cin>>x>>y;
            vec.push_back(make_pair(x,y));
        }
        a-=1;
        b-=1;
        for(long long i=0;i<k;i++){
            min_a=min(min_a,abs(vec[a].first-vec[i].first)+abs(vec[a].second-vec[i].second));
            min_b=min(min_b,abs(vec[b].first-vec[i].first)+abs(vec[b].second-vec[i].second));
        }

        // cout<<min_a<<" "<<min_b<<endl;
        if(min_a!=LONG_LONG_MAX && min_b!=LONG_LONG_MAX){
            cout<<min(abs(vec[a].first-vec[b].first)+abs(vec[a].second-vec[b].second),min_a+min_b)<<endl;
        }
        else{
            cout<<abs(vec[a].first-vec[b].first)+abs(vec[a].second-vec[b].second)<<endl;
        }


    }
}