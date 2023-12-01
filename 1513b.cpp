#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(long long a , long long *arr,long long n){
    long long val=arr[0];
    for(int i=1;i<n;i++){
        val=val&arr[i];
    }
    if(val<a){
        return false;
    }return true;




}
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
        long long key=mp.begin()->second;

        if(key<2 || !(check(mp.begin()->first,a,n))){
            cout<<0<<endl;
        }
        else{
            long long end=(key%(long long )(1e9+7)*(key-1)%(long long)(1e9+7))%(long long )(1e9+7);
            long long prod=1;
            for(long long i=1;i<=n-2;i++){
                prod=(prod%(long long)(1e9+7)*i)%(long long)(1e9+7);
            }
            long long ans=((end%(long long)(1e9+7))*(prod%(long long )(1e9+7)))%(long long)(1e9+7);

            cout<<ans<<endl;
        }

    }
}