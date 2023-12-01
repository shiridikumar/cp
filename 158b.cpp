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
        if(n==1){
            cout<<a[0]-1<<endl;
        }
        else{
            long long curr=a[0]-1;
            for(long long i=1;i<n;i++){
                if(a[i]>a[i-1]){
                    curr+=a[i]-a[i-1];
                }
            }
            cout<<curr<<endl;
            
        }





    }
}