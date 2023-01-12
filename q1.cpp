#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long k;
    cin>>k;
    vector<long long> prefix(n,0);
    long long s=a[0];
    // cout<<endl;
    prefix[0]=s;
    for(long long i=1;i<n;i++){
        s=(s|a[i]);
        prefix[i]=s;
        cout<<prefix[i]<<endl;
    }
    // cout<<endl;
    vector<long long> suffix(n,0);
    s=a[n-1];
    suffix[0]=s;
    vector<long long> final;
    long long all[n][n];
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            all[i][j]=0;
            // if(i<=j){
                if(i!=0){
                    all[i][j]=prefix[j]-prefix[i-1];
                    cout<<all[i][j]<<" ";
                }
                else{
                    all[i][j]=prefix[j];
                }
            // }
            final.push_back(all[i][j]);
        }
        cout<<endl;
        // cout<<endl;
    }
    sort(final.begin(),final.end());
    reverse(final.begin(),final.end());
    cout<<final[k-1]<<endl;
}