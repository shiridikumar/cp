#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool dfs(int node, map<int,int> &group,map<int,vector<int> > &adj){
    if(group.find(node)!=group.end()){
        return true;
    }
    for(auto & it : adj[node]){
        if(group.find(it)!=group.end()){
            return false;
        }
    }
    group[node]=1;
    for (auto &it : adj[node]){
        if(!(dfs(it,group,adj))){
            return false;
        }
    }
    return true;

}
int solve(int n,int m,vector<pair<int,int> > &vec){
    map<int,vector<int> > adj;
    for(auto &it : vec){
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }

    map<int,int> g1;
    map<int,int> g2;

    for (int student=1;student<=n;student++){
        if(g1.find(student)==g1.end() && g2.find(student)==g2.end()){
            if(!(dfs(student,g1,adj))){
                dfs(student,g2,adj);
            }
        }
    }
    int ma=max(g1.size(),g2.size());
    return ma;

}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<pair<int,int> > vec;
    int t1,t2;
    for(int i=0;i<m;i++){
        cin>>t1>>t2;
        vec.push_back(make_pair(t1,t2));
    }
    int ans=solve(n,m,vec);
    cout<<ans<<endl;
}