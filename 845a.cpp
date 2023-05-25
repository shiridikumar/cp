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
        long long par=0;
        for(long long i=0;i<n-1;i++){
            if(a[i]%2==a[i+1]%2){
                par+=1;
            }
        }
        cout<<par<<endl;


    }
}