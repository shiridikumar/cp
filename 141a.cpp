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
        long long prefix[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        prefix[0]=a[0];
        long long flag=0;
        for(long long i=1;i<n;i++){
            if(i!=0){
                if(prefix[i-1]==a[i]){
                    flag=1;
                    break;
                }
            }
            prefix[i]=prefix[i-1]+a[i];
        }
        if(flag==1){
            sort(a,a+n);
            reverse(a,a+n);
        }
        if(a[0]==a[n-1]){
            cout<<"NO"<<endl;
        }
        else{
             cout<<"YES"<<endl;
             cout<<a[n-1]<<" ";
            for(long long i=0;i<n-1;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }


    }
}