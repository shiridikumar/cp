#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n;
        int a[n];
        int curr=1;
        int gap=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(curr!=a[i]){
                gap+=1;
            }
            curr=a[i]+1;
        }
        int mod=k*n-gap*n;
        



        

    }
}