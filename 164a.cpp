#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=0 ,k=n-1;
    int s=0;
    for(int i=n;i>=1;i--){
        k=i-1;
        f=n-i;
        s+=k*(f+1)+1;
    }
    cout<<s<<endl;

}