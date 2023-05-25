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
        long long pos_small=LONG_LONG_MAX;
        long long neg_small=LONG_LONG_MAX;
        long long neg=0;
        long long ns=0;
        long long ps=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];

            if(a[i]<0){
                neg+=1;
                ns+=a[i];
                neg_small=min(neg_small,abs(a[i]));
            }
            else{
                ps+=a[i];
                pos_small=min(pos_small,a[i]);
            }
        }
        if(neg%2==0){
            cout<<abs(ns)+ps<<endl;
        }
        else{
            if(pos_small>neg_small){
                // cout<<"***"<<endl;
                cout<<abs(ns)+ps-2*neg_small<<endl;
            }
            else{
                cout<<ps-2*pos_small+abs(ns)<<endl;
            }
        }



    }
}