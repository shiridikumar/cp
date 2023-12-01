#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long bin(long long st,long long end,long long x){
    if(st>=end){
        return end;
    }
    long long mid=(end+st)/2;
    if((mid*(mid+1))/2==x){
        return mid;
    }
    else if ((mid*(mid+1))/2>x){
        return bin(st,mid-1,x);
    }
    else{
        return bin(mid+1,end,x);
    }

}

long long bin1(long long st,long long end,long long x,long long k){
    // cout<<st<<" ** "<<end<<endl;
    if(st>=end){
        return end;
    }
    long long mid=(end+st)/2;
    long long rem=((k-mid)*(k-mid+1))/2;
    if((k+1)*(k+1)-rem==x){
        return mid;
    }
    else if ((k+1)*(k+1)-rem>x){
        return bin1(st,mid-1,x,k);
    }
    else{
        return bin1(mid+1,end,x,k);
    }

}
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long k,x;
        cin>>k>>x;
        long long i=1;
        long long msg=0;
        long long pref=0;
        long long ans=0;
        if((k*(k+1))/2>=x){
            ans=bin(0,k,x);
            if((ans*(ans+1))/2<x && ans<k ){
                ans+=1;
            }
            cout<<ans<<endl;
        }
        else{
            long long rel=bin1(0,k-1,x,k-1);
            long long rem=((k-1-rel)*(k-rel))/2;
            if(k*k-rem<x &&  rel<k-1){
                rel+=1;
            }
            cout<<rel+k<<endl;


        }
    }
}