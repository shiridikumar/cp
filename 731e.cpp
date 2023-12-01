#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,k;
        cin>>n>>k;
        vector<long long> vec(n,LONG_LONG_MAX);
        long long position[k];
        long long temp[k];
        for(long long i=0;i<k;i++){
            cin>>position[i];
        }
        for(long long i=0;i<k;i++){
            cin>>temp[i];
            vec[position[i]-1]=temp[i];
        }
        for(long long i=1;i<n;i++){
            if(vec[i-1]!=LONG_LONG_MAX){
                vec[i]=min(vec[i],vec[i-1]+1);
            }
        }

        for(long long i=n-2;i>=0;i--){
            if(vec[i+1]!=LONG_LONG_MAX){
                vec[i]=min(vec[i],vec[i+1]+1);
            }
        }
        for(long long i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }

        cout<<endl;
    }
}