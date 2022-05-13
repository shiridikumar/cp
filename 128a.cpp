#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1<=r2 && l2<=r1){
            cout<<max(l1,l2)<<endl;
        }
        else{
            cout<<l1+l2<<endl;
        }

    }
}
 