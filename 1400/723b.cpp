#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a=11,b=111;
        long long flag=0;
        for(long long i=0;a*i<=n;i++){
            long long rem=n-a*i;
            if(rem%b==0){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }


    }
}