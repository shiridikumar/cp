#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long num=(long long)log2(n);
        if(n==1){
            cout<<"FastestFinger"<<endl;
        }
        // else if(n==2){
            // cout<<"Ashish"
        // }
        else if (n==2 || n%2==1){
            cout<<"Ashishgup"<<endl;
        }
        else{
            long long prod=1;
            while(n>1){
                if(n%2==0){
                    n=n/2;
                    prod=prod*2;

                }
                else{
                    break;
                }
            }
            if(n!=1){
                bool prime=isprime(n);
                if(prod==2 && !(prime)){
                    cout<<"Ashishgup"<<endl;
                }
                else if (prod==2 && prime){
                    cout<<"FastestFinger"<<endl;
                }
                else{
                    cout<<"Ashishgup"<<endl;
                }
            }
            else{
                cout<<"FastestFinger"<<endl;
            }
        }



    }
}