#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long> b(n);
    vector<long long> b1(n);
    long long c=0;
    b[0]=0;
    for(long long i=1;i<n;i++){
        if(a[i-1]-a[i]>0){
            c+=a[i-1]-a[i]; 
        }
        b[i]=c;

    }
    c=0;
    b1[0]=0;
    for(long long i=1;i<n;i++){
        if(a[i]-a[i-1]>0){
            c+=(a[i]-a[i-1]);
        }
        b1[i]=c;
    }
    long long t,s;
    for(long long j=0;j<m;j++){
        cin>>t>>s;
        if(t<s){
        cout<<b[s-1]-b[t-1]<<endl;
        }
        else{
            // cout<<b1[s-1]<<" "<<b1[t-1]<<endl;
             cout<<b1[t-1]-b1[s-1]<<endl;

        }
    }
}