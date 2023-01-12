#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,a,b,c;
        cin>>a>>b>>c>>n;
        int ma=max(max(a,b),c);
        int rem=ma-a+ma-b+ma-c;
        if(rem>n){
            cout<<"NO"<<endl;
        }
        else{
            if((n-rem)%3==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }


    }
}