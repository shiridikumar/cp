#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    n=n-1;
    cout<<n+1+(n*(n+1)/2)+(n*n*(n+1)/2)-(n*(n+1)*(2*n+1)/6)<<endl;
}