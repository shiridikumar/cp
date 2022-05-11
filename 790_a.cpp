#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        string s;
        cin>>s;
        int ind;
        int flag=0;
        for(int j=0;j<s.length();j++){
            if(s.substr(j,1)!="0"){
                ind=j;flag=1;
                break;
            }
        }
        if(flag==1){
            string res=s.substr(0,s.length());
            int end=0;
            for(int k=0;k<3;k++){
                end+=stoi(res.substr(k,1));
            }
            // cout<<end<<"*********"<<endl;
            int start=0;
            for(int k=res.length()-3;k<res.length();k++){
                start+=stoi(res.substr(k,1));
            }
            if(start==end){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        else{
            cout<<"YES"<<endl;
        }


    }
}