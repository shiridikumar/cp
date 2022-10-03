#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t =0;t<test;t++){
        int n,m;
        cin>>n>>m;
        int a[n];
        vector<char> s;
        for(int i=0;i<m;i++){
            s.push_back('B');
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            int temp=min(a[i]-1,m-a[i]);
            if(s[temp]=='B'){
                s[temp]='A';
            }
            else{
                s[max(a[i]-1,m-a[i])]='A';
            }
            
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;

    
        
    }
}