#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long t=0;t<test;t++)
    {
        long long n,c,q;
        string s;
        cin>>n>>c>>q;
        cin>>s;
        map<long long,pair<long long,long long> > mp;
        long long t1,t2;
        long long curr=n;
        long long prev=curr;
        mp[n]=make_pair(1,n);
        for(long long i=0;i<c;i++){
            cin>>t1>>t2;
            prev=curr;
            curr+=(t2-t1)+1;
            mp[curr]=make_pair(t1,t2);
        }
        // cout<<endl;
        long long temp;
        for(long long i=0;i<q;i++){
            cin>>temp;
            auto ind=mp.lower_bound(temp);
        
            long long err=(*ind).second.second-((*ind).first-temp);
            while(err>n){
                ind=mp.lower_bound(err);
                err=(*ind).second.second-((*ind).first-err); 
            }
            cout<<s[err-1]<<endl;
            
        }
    }

}