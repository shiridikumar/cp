#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[n];
        string s;
        cin>>s;
        int first=-1;
        int last=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(first==-1){
                    first=i;
                }
                last=i;
            }

        }
        if(first!=-1){
            last=max(last+1,n-last);
            first=max(first+1,n-first);
            cout<<2*max(first,last)<<endl;
        }
        else{
            cout<<n<<endl;
        }

    }
}