#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int x,y,z;
        cin>>x>>y>>z;
        if(x>=y){
            cout<<x<<endl;
        }
        else{
            if(z>=abs(x-y)){
                cout<<y<<endl;
            }
            else{
                cout<<y+abs(x-y)-z<<endl;
            }

        }



    }
}