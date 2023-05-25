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
        long long cont=1;
        for(long long i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                curr=max(curr,cont);
                cont=0;

            }
            cont+=1;
        }
        curr=max(curr,cont);

        cout<<curr+1<<endl;



    }
}