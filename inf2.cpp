#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int GetAnswer(int n,vector<int> a){
    vector<int> row(n+1,-1);
    vector<vector<int> > dp(n+1,row);
    int s=0;
    vector<int> prefix;
    vector<int> suffix;
    for(int i=0;i<n;i++){
        

    }
    vector<int> neg;
    for(int i=0;i<a.size();i++){
        s+=a[i];
    }
   
}
int main(){
    int test;
    int n;
    cin>>n;
    vector<int> a;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    int ans=GetAnswer(n,a);
    cout<<ans<<endl;
}