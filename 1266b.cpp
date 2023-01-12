#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        if(x%14<1 || x%14>6 || x<=14){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}