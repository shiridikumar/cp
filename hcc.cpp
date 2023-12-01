#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long x;
        cin>>x;
        long long dup=x;
         vector<long long> sub;
           long long po=0;
        if(dup%2==1){
            sub.push_back(1);
            // po+=1;
            dup-=1;
        }
        // cout<<dup<<endl;
        while(dup>1){
            if(dup&1){
                sub.push_back(pow(2,po));
            }
            dup=dup>>1;
            po+=1;
            // cout<<dup<<" "<<po<<endl;
        }

        long long curr=x;
        long long rem=pow(2,po);
        // cout<<rem<<endl;
        while(rem>1){
            rem=rem/2;
            sub.push_back(rem);
        }
        cout<<sub.size()+1<<endl;
        cout<<x<<" ";
        for(long long i=0;i<sub.size();i++){
            cout<<x-sub[i]<<" ";
            x=x-sub[i];
        }

        cout<<endl;

    }
}