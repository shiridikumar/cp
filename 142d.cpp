#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long curr=0;
        long long o=0;
        long long c=0;
        long long color=0;
        vector<long long> colors(n,0);
        vector<long long> clr(n,0);
        long long of=0,cf=0;
        long long one=0;
        long long two=0;
        if(s[0]=='('){
            one=1;
            two=2;
        }
        else{
            two=1;
            one=2;
        }
        for(long long i=0;i<s.size();i++){
            if(s[i]=='('){
                o+=1;
            }
            else{
                c+=1;
            }
            if(o>c){
                colors[0]+=1;
                clr[i]=one;
            }
            if(o<c){
                colors[1]+=1;
                clr[i]=two;
            }
            if(o==c){
                if(s[i]==')'){
                    colors[0]-=1;
                    clr[i]=one;
                    of=1;
                }
                else{
                    colors[1]-=1;
                    clr[i]=two;
                    cf=1;
                }
            }
        }
        if(o!=c){
            cout<<-1<<endl;
        }
        else{
            cout<<of+cf<<endl;
            for(auto it=clr.begin();it!=clr.end();it++){
                cout<<(*it)<<" ";
            }
            cout<<endl;
        }
    }
}