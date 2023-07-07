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
        int neg=0;
        int pos=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==-1){
                neg+=1;
            }
            if(a[i]==1){
                pos+=1;
            }
        }
        if(pos<neg){
            int don=(neg-pos+1)/2;
            if((neg-don)%2==0){
                cout<<don<<endl;
            }
            else{
                cout<<don+1<<endl;
                
            }
        }
        else{
            if(neg%2==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
}