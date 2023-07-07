#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    // cin>>test;
    // for(long long tes=0;tes<test;tes++){
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long curr=1;
    long long mi,ma;
    mi=a[0];
    long long temp=1;
    for(long long i=1;i<n;i++){
        if(a[i]>2*a[i-1]){
            temp=0;
        }
        temp+=1;
        curr=max(curr,temp);
    }
    cout<<curr<<endl;
}