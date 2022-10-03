#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=0;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a[1]=='-'){
            p--;
        }
        else{
            p++;
        }
    }
    cout<<p<<endl;
}