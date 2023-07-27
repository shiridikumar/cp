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
        long long flag=0;
        long long diff=LONG_LONG_MAX;
        for(long long i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag=1;
                break;
            }
            else{
                // cout<<diff<<endl;
                diff=min(diff,(a[i+1]-a[i])/2+1);
            }
        }
        if(flag==1){

            cout<<0<<endl;
        }
        else{
            cout<<diff<<endl;
        }


    }
}