#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int test;
    // cin>>test;
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>temp;
            if(temp==1){
                cout<<(abs(2-j)+abs(2-i))<<endl;
                break;
            }
        }
    }
}