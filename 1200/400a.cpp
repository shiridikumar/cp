#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    // cin>>test;
    // for(int tes=0;tes<test;tes++){
    int n;
    cin>>n;
    int a[n];
    int flag=0;
    vector<int> jewel(n+2,-1);
    for(int i=2;i<=n+1;i++){
        if(jewel[i]==-1){
            for(int j=i;j<=n+1;j+=i){
                jewel[j]=2;
            }
            jewel[i]=1;
        }
        else{
            flag=1;
        }
    }
    if(flag==0){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
    for(int i=2;i<=n+1;i++){
        cout<<jewel[i]<<" ";
    }
    cout<<endl;




    // }
}