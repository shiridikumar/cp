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
        cin>>s;
        int l=0;int r=n-1;
        int count=0;
        while(l<r){
            if(s[l]!=s[r]){
                l+=1;r-=1;
                count+=2;
            }
            else{
                break;
            }
        }
        cout<<n-count<<endl;


    }
}