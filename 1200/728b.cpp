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
        vector<long long> vec(2*n+1,-1);
        for(long long i=0;i<n;i++){
            cin>>a[i];
            vec[a[i]]=i+1;
        }
        map<pair<long long,long long> ,long long> vis;
        long long mi,ma;
        long long count=0;
        for(long long i=0;i<n;i++){
            for(long long k=2*a[i];k<2*n;k+=a[i]){
                
                if(vec[k/a[i]]!=-1){
                    // cout<<k<<" --"<<a[i]<<endl;
                    if(vec[k/a[i]]+i+1==k){
                        mi=min(a[i],k/a[i]);
                        ma=max(a[i],k/a[i]);
                        if(vis[make_pair(mi,ma)]!=2 && mi!=ma){
                             count+=1;
                             vis[make_pair(mi,ma)]=2;
                        }
                        // vis[make_pair(mi,ma)]=true;

                        // cout<<k<<" --"<<a[i]<<endl;
                        // count+=1;
                    }
                }
            }
            // vec[a[i]]=-1;
        }
        cout<<count<<endl;
    }
}