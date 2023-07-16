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
        long long even=0,odd=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                even+=a[i];
            }
            else{
                odd+=a[i];
            }
        }
        if(odd>even){
            for(long long i=0;i<n;i++){
                if(i%2==1){
                    cout<<a[i]<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
        }
        else{
            for(long long i=0;i<n;i++){
                if(i%2==0){
                    cout<<a[i]<<" ";
                }
                else{
                    cout<<1<<" ";
                }
            }
        }
        cout<<endl;




    }
}