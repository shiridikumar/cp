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
    long long s=0;
    long long prev=LONG_LONG_MAX;
    for(long long i=n-1;i>=0;i--){
        if(a[i]<prev){
            s+=a[i];
            prev=a[i];
        }
        else{
            s+=prev-1;
            prev=prev-1;
        }
        if(prev==0){
            break;
        }
        // cout<<s<<endl;
    }
    cout<<s<<endl;
}
