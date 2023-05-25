#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        string s;
        map<string,bool> mp;
        string temp;
        cin>>s;
        int c=0;
        for(int i=0;i<s.size()-1;i++){
            temp=s.substr(i,2);
            if(!(mp[temp])){
                mp[temp]=true;
                c+=1;
            }
        }
        cout<<c<<endl;


    }
}