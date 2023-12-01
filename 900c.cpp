#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,k,x;
        cin>>n>>k>>x;
        long long mi=0;
        long long i=1;
        mi=k*(k+1)/2;
        // while(i<=k){
        //     mi+=i;
        //     i++;
        // }
        long long ma=0;
        i=k;
        long long ind=n;
        ma=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        // while(i>0){
        //     ma+=ind;
        //     ind--;
        //     i--;
        // }

        if(x<=ma && x>=mi){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }



    }
}