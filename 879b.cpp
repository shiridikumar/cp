#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        string l,r;
        cin>>l>>r;
        string s1="",s2="";
        if(l.size()>r.size()){
            int pad=l.size()-r.size();
            while(pad>0){
                s2.push_back('0');
                pad--;
            }
        }
        if(r.size()>l.size()){
            int pad=r.size()-l.size();
            while(pad>0){
                s1.push_back('0');
                pad--;
            }
        }
        s1=s1+l;
        s2=s2+r;
        int diff=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]){
                continue;
            }
            else{
                diff=int(s2[i]-'0')-int(s1[i]-'0')+(s1.size()-i-1)*9;
                break;
            }

        }
        cout<<diff<<endl;



    }
}