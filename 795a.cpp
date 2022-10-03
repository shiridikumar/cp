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
        long long ev=0,od=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                ev+=1;
            }
            else{
                od+=1;
            }
        }
        cout<<min(ev,od)<<endl;
       

    }
}