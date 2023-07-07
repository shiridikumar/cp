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
        vector<int> ind(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            ind[a[i]]=i+1;
        }
        if((ind[n]>ind[2] && ind[n]<ind[1]) || (ind[n]>ind[1] && ind[n]<ind[2])){
            cout<<ind[1]<<" "<<ind[2]<<endl;
        }
        else{
            if((ind[n]<ind[1] && ind[1]<ind[2] )|| (ind[n]>ind[1]&& ind[1]>ind[2])){
                cout<<ind[1]<<" "<<ind[n]<<endl;
            }
            else{
                cout<<ind[2]<<" "<<ind[n]<<endl;
            }
        }
    }
}