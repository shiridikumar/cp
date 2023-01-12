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
    long long ind=-1;
    sort(a,a+n);
    for(long long i=0;i<n-2;i++){
        
        if(a[i]+a[n-2]>a[n-1]){
            ind=i;
            // cout<<a[i]<<" *** "<<a[n-1]<<" "<<a[n-2]<<endl;
            break;
        }

    }
    if(ind==-1){
        cout<<"NO"<<endl;
    }
    else{
        long long temp=a[ind];
        cout<<"YES"<<endl;
        cout<<a[ind]<<" ";

        for(long long i=0;i<ind;i++){
            cout<<a[i]<<" ";
        }
        for(long long i=ind+1;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        // cout<<endl;
    }
}