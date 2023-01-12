#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n];
    long long ma=INT_MIN;
    long long ind=0;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=ma){
            ma=a[i];
            ind=i;
        }
    }
    long long secmax=0;
    for(long long i=0;i<n;i++){
        if(a[i]>=secmax){
            if(i!=ind){
                secmax=a[i];
            }
        }
    }
    long long times=m/(k+1);
    // cout<<secmax<<" "<<ma<<endl;
    long long su=k*ma+secmax;
    cout<<times*(su)+(m%(k+1))*ma<<endl;


}