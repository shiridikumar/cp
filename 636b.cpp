#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        if((n/2)%2==0){
            cout<<"YES"<<endl;
            int c=2;
            for(int i=0;i<n/2;i++){
                cout<<c<<" ";
                c+=2;
            }
            c=1;
            for(int i=0;i<n/2-1;i++){
                cout<<c<<" ";
                c+=2;
            }
            c+=n/2;
            cout<<c<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}