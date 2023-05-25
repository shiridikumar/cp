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
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==2){
            cout<<max(abs(a[0]-a[1])*2,a[0]+a[1])<<endl;
        }
        else if(n==3){

            long long ans=max(max(max(3*(abs(a[0]-a[1])),3*(abs(a[1]-a[2]))),3*(abs(a[0]-a[2]))),a[0]+a[1]+a[2]);
            ans=max(max(3*a[0],3*a[2]),ans);
            cout<<ans<<endl;
        }
        else{
            long long ele=*max_element(a,a+n);
            cout<<n*ele<<endl;
        }


    }
}