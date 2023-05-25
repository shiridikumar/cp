#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        string s;
        cin>>s;
        string act;
        char st='0';
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                if(i==0){
                    act.push_back('0');
                    
                }
                else{
                    // s[i]=s[i-1];
                    act.push_back(act[i-1]);
                }
            }
            else{
                act.push_back(s[i]);
            }
        }
        cout<<act<<endl;


    }
}