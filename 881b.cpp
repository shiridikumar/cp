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
        long long s=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            s+=abs(a[i]);
        }
        long long i=0;
        while(i<n && a[i]>=0){
            i++;
        }
        long long b=0;
        while(i<n){
            if(a[i]<0){
                b+=1;
                while(i<n && a[i]<=0){
                    i++;
                }
            }
            else{
                i++;
            }
        }
        cout<<s<<" "<<b<<endl;
        


    }
}