#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long t=0;t<test;t++){
        long long n,l,r;
        long long flag=0;
        cin>>n>>l>>r;
        for(long long i=1;i<=n;i++){
            if((i*(l/i)+i)>r && l%i!=0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(long long i=1;i<=n;i++){
                if(l%i==0){
                    cout<<l<<" ";
                }
                else{
                    cout<<(i*(l/i)+i)<<" ";
                }
            }
            cout<<endl;  
        }

    }

}