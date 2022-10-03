#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int last=1;
        string s=to_string(n);
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                k+=1;
            }
        }
        cout<<k<<endl;
        while(n>0){
            int x=n%10;
            if(x!=0){
                cout<<x*last<<" ";
            }
            last=last*10;
            n=n/10;
        }
         cout<<endl;

    }
}