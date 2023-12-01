#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &Y) {

    map<int,int> mp;

    vector<int> bottom;
    vector<int> up;

    bottom.push_back(0);
    up.push_back(Y[0]);
    for(int i=1;i<Y.size();i++){
        up.push_back(max(Y[i-1],Y[i]));
        bottom.push_back(min(Y[i-1],Y[i]));
    }
    for(int i=0;i<Y.size();i++){
        cout<<up[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<Y.size();i++){
        cout<<bottom[i]<<" ";
    }
    cout<<endl;
    // mp[bottom[0]]+=1;
    mp[up[0]+1]-=1;
    for(int i=1;i<Y.size();i++){
        if(bottom[i]!=up[i-1]){
            mp[bottom[i]]+=1;
        }
        if(up[i]!=bottom[i-1]){
            mp[up[i]+1]-=1;
        }
    }
    
    int curr=0;
    int count=0;

    for(auto &it : mp){
        count+=it.second;
        cout<<count<<" "<<it.second<<endl;
        // cout<<it.first<<" "<<it.second<<endl;
        curr=max(count,curr);
    }
    return curr;

    // Implement your solution here
}



int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=solution(a);
    cout<<ans<<endl;

}