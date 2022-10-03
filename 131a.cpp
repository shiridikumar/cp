#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int a,b,c,d;
    for(int t=0;t<test;t++){
        cin>>a>>b;
        cin>>c>>d;
        if(a+b+c+d==4){
            cout<<2<<endl;
        }
        else if(a+b+c+d==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }

}