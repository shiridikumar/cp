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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int bits=log2(n);
        int flag=0;
        int ind=0;
        for(int i=0;i<n-1;i++){
            if(pow(2,ind)==i+1){
                ind+=1;
                continue;
            }
            else{
                if(a[i]>a[i+1]){
                    flag=1;
                    break;
                }
            }

        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}