#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int a[n];
        int mi=INT32_MAX;
        int temp;
        int total=0;
        for(int j=0;j<n;j++){
            cin>>temp;
            if(temp<mi){
                mi=temp;
            }
            total+=temp;
        }
        cout<<total-(n*mi)<<endl;
    }

}