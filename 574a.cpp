#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<int> drinks(k+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        drinks[a[i]]+=1;
    }
    int dissatisfaction=0;
    for(int i=0;i<drinks.size();i++){
        if(drinks[i]%2!=0){
            dissatisfaction+=1;
        }
    }
    cout<<n-dissatisfaction/2<<endl;
    



}