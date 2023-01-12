#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr=0;
    int ma=0;
    int prev=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>prev){
            ma+=1;
            prev=a[i];
        }
        else{
            curr=max(curr,ma);
            ma=0;
            ma+=1;
            prev=a[i];
        }
    }
    curr=max(ma,curr);
    cout<<curr<<endl;
}