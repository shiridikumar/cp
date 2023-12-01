#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,m,k;
        cin>>n>>m>>k;
        if(k==1){
            cout<<1<<endl;
        }
        else{
            long long ans=0;
            if(n==1){
                cout<<m<<endl;
            }
            else{
                long long div=m/n;
                if(k==2){
                    ans=min(m,n-1)+div;
                }
                else if (k==3){
                    if(m<n+1){
                        ans=0;
                    }
                    else{
                        long long ext=div-1;
                        ans=1+max((long long)0,(long long)(m-n-1))-ext;
                    }
                }
                else{
                    ans=0;
                }
                cout<<ans<<endl;
            }
            // cout<<ans<<endl;
        }



    }
}