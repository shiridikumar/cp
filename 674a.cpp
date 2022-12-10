#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,x;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
        }
        else{
            cout<<ceil(1.0*(n-2)/x)+1<<endl;
        }


    }
}