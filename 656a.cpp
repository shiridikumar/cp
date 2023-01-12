#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int m,n;
        cin>>m>>n;
        int ma=m/2*n+(m%2!=0)*((n+1)/2);
        int na=n/2*m +(n%2!=0)*((m+1)/2);
        cout<<min(ma,na)<<endl;


    }
}