#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long changed(long long n){
    long long p=1;
    long long s=0;
    long long k=11;
    while(n>0){
        long long x=(n%10)*p;
        if(p==1){
            s+=x;
        }
        else{
            s+=(n%10)*k;
            k=k*10+1;
        }
        p=p*10;
        n=n/10;
    }
    return s;
}
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long l,r;
        cin>>l>>r;
        long long ans=changed(r)-changed(l);
        cout<<ans<<endl;
    }
}