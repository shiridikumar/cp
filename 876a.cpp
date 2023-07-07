#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        // if(k<n/2){
            cout<<ceil(1.0*(k+1)/k*1.0)*2-max(0.0,(2.0*ceil((k+1)/(k*1.0))-n))<<endl;
        // }


    }
}