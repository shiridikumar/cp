#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[n];
        int mi=INT_MAX;
        int prod=1;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mi=min(a[i],mi);
            if(a[i]==0){
                count+=1;
                mi=0;
                continue;
            }
            prod=prod*a[i];
        }

        if(count>=2){
            cout<<0<<endl;
        }
        else{
            if(mi==0){
                prod=prod;
            }
            else{
                prod=prod/mi;
                prod=prod*(mi+1);

            }
            cout<<prod<<endl;
        }
        // prod=prod/mi;
        // prod=prod*(mi+1);
        // cout<<prod<<endl;



    }
}