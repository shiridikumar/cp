#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,x,y,z;
        cin>>x>>y>>z;
        if(x>y){
            if(x!=z){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<y<<" "<<x<<" "<<y<<endl;
            }
        }
        else if(y>x){
            if(y!=z){
                cout<<"NO"<<endl;
            }
            else{
                
                cout<<"YES"<<endl;
                cout<<x<<" "<<x<<" "<<y<<endl;
            }
        }
        else{
            if(x<z){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                if(x==z){
                    cout<<x<<" "<<x<<" "<<x<<endl;
                }
                else{
                    cout<<x<<" "<<z<<" "<<z<<endl;
                }
            }
        }

    }
}


