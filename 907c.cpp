#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a[n];
        long long tot=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            tot+=a[i];
        }
        sort(a,a+n);
        long long x=0;
        long long i=0;
        while(x<tot-x && i<n){
            x+=a[i];
            i+=1;
        }

        if(x==tot-x){
            cout<<x+n-i<<endl;
        }
        else{
            i-=1;
            x-=a[i];
            long long temp=tot/2-x;
            x+=temp;
            // cout<<temp<<" "<<x<<endl;
            long long ans=x+n-i;
            if(tot!=1 && a[i]-temp!=1){
                ans+=tot%2;
            }
            cout<<ans<<endl;
        }
      

    }
}