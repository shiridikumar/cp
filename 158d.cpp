#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currmi=INT_MAX;
    vector<int> dup(n,0);
    vector<int> dup1(n,0);
    // dup[0]=a[0]+n-1;
    for(int i=0;i<n;i++){
        dup[i]=a[i]+n-1-i;
        dup1[i]=a[i]+i;
    }

    //  for(auto &it: dup1){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    vector<int> prefix(n,0);
    vector<int> suffix(n,0);
    prefix[0]=dup[0];
    for(int i=1;i<n;i++){
        prefix[i]=max(prefix[i-1],dup[i]);
    }

    suffix[n-1]=dup1[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=max(suffix[i+1],dup1[i]);
    }

    // for(auto &it: suffix){
    //     cout<<it<<" ";
    // }
    // cout<<endl;

    for(int i=0;i<n;i++){
        if(i==0 && i==n-1){
            currmi=min(currmi,a[i]);
        }
        if(i==0){
            currmi=min(currmi,max(a[i],suffix[i+1]));
        }
        if(i==n-1){
            currmi=min(currmi,max(prefix[i-1],a[i]));
        }
        currmi=min(currmi,max(prefix[i-1],max(a[i],suffix[i+1])));
    }
    cout<<currmi<<endl;
}