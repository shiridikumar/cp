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
        long long se=LONG_LONG_MAX;
        long long so=LONG_LONG_MAX;
        long long of=0,ef=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                se=min(se,a[i]);
                of=1;
            }
            else{
                so=min(so,a[i]);
                ef=1;
            }

        }
        if(of+ef!=2){
            cout<<"YES"<<endl;
        }
        else{
            if(se<so){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}