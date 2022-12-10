#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int k;
    float div=(1.0*m)/n;
    float ans=log10(div)/log10(3.0/2.0)+1.0;
    cout<<(int)ans<<endl;
    
    
}