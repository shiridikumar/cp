#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int n,vector<int> a,int s,vector<vector<int> >& dp, int i,int j){
     if(n==1){
        return 0;
    }
    else{
        int ans=0;
        if(dp[i][j]!=-1){
            ans = dp[i][j];
        }
        else{
            cout<<i<<" "<<j<<" ****"<<endl;
            int ma=*max_element(a.begin(),a.end());
            dp[i][j]= max(max(solve(n-1,a,s-a[i],dp,i+1,j),solve(n-1,a,s-a[j-1],dp,i,j-1)),s-ma);
            ans=dp[i][j];
        }
        return ans;
    }
}

int GetAnswer(int n,vector<int> a){
    vector<int> row(n+1,-1);
    vector<vector<int> > dp(n+1,row);
    int s=0;
    for(int i=0;i<a.size();i++){
        s+=a[i];
    }
    return solve(n,a,s,dp,0,n);
   
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
