#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long t=0;t<test;t++){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long ind=0;
        while(a[ind]==0){
            ind++;
            if(ind>=n-1){
                break;
            }
        }
        long long count=0;
        long long ans=0;
        for(long long i=ind;i<n-1;i++){
            if(a[i]==0){
                count+=1;
            }
            ans+=a[i];
        }
        cout<<ans+count<<endl;
    }


}