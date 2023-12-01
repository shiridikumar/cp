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
            b[i]=a[i];
        }
        sort(a,a+n);
        map<long long,vector<long long> > mp;
        for(long long i=0;i<n;i++){
            mp[a[i]].push_back(n-i);
        }
        map<long long,long long> pointers;
        vector<long long> fin;
        for(long long i=0;i<n;i++){
            fin.push_back(mp[b[i]][pointers[b[i]]]);
            pointers[b[i]]+=1;
        }
        for(auto & it: fin){
            cout<<it<< " ";
        }
        cout<<endl;
        


    }
}