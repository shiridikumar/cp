#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int l,r;
        cin>>l>>r;
        if(r/2<l){
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<r/2<<" "<<(r/2)*2<<endl;
        }
    }
}