#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a[n];
        long long mi=LONG_LONG_MAX;
        long long ind=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<mi){
                ind=i;
                mi=a[i];

            }
        }
        if(ind==0){
            cout<<n-1<<endl;
        }
        else{
            cout<<n<<endl;
        }
        long long x,y;
        if(ind!=0){
            cout<<1<<" "<<ind+1<<" "<<mi<<" "<<mi+1<<endl;
        }
        for(long long i=1;i<n;i++){
            a[i]=mi+i;
            cout<<1<<" "<<i+1<<" "<<mi<<" "<<mi+i<<endl;
        }





    }
}