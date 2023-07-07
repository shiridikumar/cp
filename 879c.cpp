#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        string s ,t;
        cin>>s>>t;
        if(s==t){
            cout<<0<<endl;
        }
        else{
            string news="";
            for(int i=s.size()-1;i>=0;i--){
                news.push_back(s[i]);

            }
            int curr=INT_MAX;
            int c=0;
            if(news==t){
                c=2;
            }
            else{
                c=0;
                for(int i=0;i<news.size();i++){
                    if(news[i]!=t[i]){
                        c+=1;
                    }
                }
                if(c%2==1){
                    c=c*2;
                }
                else{
                    c=c*2-1;
                }
            }
            int d=0;

            for(int i=0;i<s.size();i++){
                if(s[i]!=t[i]){
                    d+=1;
                }
            }
            if(d%2==0){
                d=d*2;
            }
            else{
                d=d*2-1;
            }
            curr=min(c,d);
            cout<<curr<<endl;
        }


    }
}