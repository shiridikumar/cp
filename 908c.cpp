#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        int ind=0;
        k=min(n,k);
        while(k>0){

            int last=(ind+n-1)%n;
            // cout<<ind<<" "<<last<<endl;
            if(a[last]>n){
                flag=1;
                break;
            }
            ind=(ind-a[last]+n)%n;
            k--;
        }
        if(flag!=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }




    }
}