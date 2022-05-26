#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int curr=0;
        int prev=1;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(prev==0){
                prev=1;
                continue;
            }
            if(a[i]>a[i+1]){
                prev=0;
                count+=1;
            }
            else{
                prev=1;
            }


        }
        cout<<count<<endl;
       

    }
}