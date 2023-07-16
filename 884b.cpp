#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        if(n<=3){
            if(n==2){
                cout<<2<<" "<<1<<endl;
            }
            else if(n==3){
                cout<<2<<" "<<1<<" "<<3<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            vector<int> fin(n+1,0);
            for(int i=1;i<=n;i++){
                fin[i]=i;
            }
            fin[1]=2;
            fin[n]=3;
            if(n/2+1==2){
                fin[n/2+1]=1;
                fin[3]=n;
            }
            else if(n/2+1==3){
                fin[n/2+1]=1;
                fin[2]=n;
            }
            else{
                fin[n/2+1]=1;
                fin[3]=n;
                fin[2]=n/2+1;
            }
            for(int i=1;i<=n;i++){
                cout<<fin[i]<<" ";
            }
            cout<<endl;
        }


    }
}