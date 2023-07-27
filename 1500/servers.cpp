#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }


    int s=0;
    int curr=0;
    int cont=0;
    int ind=0;
    for(int i=0;i<n;i++){
        cont+=a[i];
        curr+=b[i];
        ind+=1;
        if(ind>=2 && cont>curr){
            
        }

    }

}