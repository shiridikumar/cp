#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        char s;
        cin>>s;
        string st="codeforces";
        int flag=0;
        for(int i=0;i<st.size();i++){
            if(st[i]==s){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}