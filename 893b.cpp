#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,m,d;
        cin>>n>>m>>d;
        long long a[m];
        for(long long i=0;i<m;i++){
            cin>>a[i];
        }
        long long actual=m;
        if(a[0]!=1){
            actual+=1;
        }
        for(long long i=1;i<m;i++){
            actual+=(a[i]-a[i-1]-1)/d;
        }
        if(a[0]!=1){
            actual+=(a[0]-2)/d;
        }
        if(a[m-1]!=n){
            actual+=(n-a[m-1])/d;
        }
        long long prev=0;
        long long nex=n;
        long long ans=0;
        long long flag=0;
        for(long long i=0;i<m;i++){
            if(a[i]==1){
                continue;
            }
            if(i==0){
                prev=1;
            }
            else{
                prev=a[i-1];
            }
            if(i==m-1){
                nex=n+1;
            }
            else{
                nex=a[i+1];
            }

            long long diff=(a[i]-prev-1)/d+(nex-a[i]-1)/d;
            // cout<<diff<<" "<<(nex-prev-1)/d<<" "<<a[i]<<endl;

            if((nex-prev-1)/d==diff){
                flag=1;
                ans+=1;
            }
        }
        if(flag==1){
            cout<<actual-1<<" "<<ans<<endl;
        }
        else{
            cout<<actual<<" "<<m<<endl;
        }


    }
}