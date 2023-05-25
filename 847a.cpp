#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    string st="314159265358979323846264338327";
    // cout<<setprecision(30)<<22.0/7.0<<endl;
    // 314159265358
    for(int tes=0;tes<test;tes++){
        int n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=st[i]){
                break;
            }
            count+=1;
        }
        cout<<count<<endl;



    }
}