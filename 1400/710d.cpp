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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        // int mid=n/2;
        int c=0;
        int extra=0;
        if(n%2==1){
            extra=1;
        }
        for(int i=0;i<n/2;i++){
            if(a[i]==a[i+n/2+extra]){
                c+=2;
            }
        }
        if(n%2!=0){
            c+=1;
        }
        cout<<c<<endl;


    }
}