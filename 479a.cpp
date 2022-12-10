#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    int n1;
    cin>>n>>k;
    n1=n;
    k=k;
    if(n1%10>0){
        n1-=1;
    }
    else{
        n1=n1/10;
    }
    int tsum=0;
    while(k>0){
        // cout<<n1<<endl;
        tsum=n1%10;
        if(k>(tsum+1)){
            n1=n1/10;
            k=k-(tsum+1);
        }
        else{
            n1=n1-(k-1);
            k=0;
        }
    }
    cout<<n1<<endl;
    
}