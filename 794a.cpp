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
        int s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(((s-a[i])/(float)(n-1))==(float)a[i]){
                cout<<"YES"<<endl;
                // cout<<a[i]<<" test "<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
        
    }
}

