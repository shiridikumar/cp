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
        long long ans1=0,ans2=0,ans3=0;
        vector<long long> pivot(n+1,0);
        if(n%2==0){
            for(long long i=1;i<n-1;i++){
                if(i%2!=0 && (a[i+1]>=a[i] || a[i-1]>=a[i])){
                    ans1+=max(max(a[i+1],a[i-1]),a[i])-a[i]+1;
                }
                if(i%2==0 && (a[i+1]>=a[i] || a[i-1]>=a[i])){
                    ans2+=max(max(a[i+1],a[i-1]),a[i])-a[i]+1;
                }
                pivot[i]=ans1-ans2;
            }
            long long mi=LONG_LONG_MAX;
            for(long long i=0;i<n;i++){
                mi=min(pivot[i]+ans2,mi);
            }
            cout<<mi<<endl;
        }
        else{
            for(long long i=1;i<n-1;i++){
                if(i%2!=0 && (a[i+1]>=a[i] || a[i-1]>=a[i])){
                    ans3+=max(max(a[i+1],a[i-1]),a[i])-a[i]+1;
                }
            }
            cout<<ans3<<endl;
        }
    }

}