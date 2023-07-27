#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void dfs(map<pair<int,int>,int > &idx,int source, vector<int> &vis,map<int,vector<int> > &adj ,vector<int> &num){
    for(int i=0;i<adj[source].size();i++){
        if(vis[adj[source][i]]==0 && adj[source][i]!=1){
            vis[adj[source][i]]=idx[make_pair(source,adj[source][i])];
            // if(source==1){
            //     cout<<adj[source][i]<<" --> "<<vis[adj[source][i]]<<" "<<vis[source]<<endl;
            // }
            if(vis[source]<vis[adj[source][i]]){
                num[adj[source][i]]=num[source];
            }
            else{
                 num[adj[source][i]]=num[source]+1;
            }
            dfs(idx,adj[source][i],vis,adj,num);
        }
    }


}
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n;
        cin >> n;
        int e1, e2;
        // vector<pair<int, int>> edges;
        map<pair<int,int> ,int> idx;
        map<int,vector<int> > adj;
        vector<int> vis(n+1,0);
        vector<int> num(n+1,0);
        vis[1]=0;
        num[1]=1;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> e1 >> e2;
            idx[make_pair(e1,e2)]=i+1;
            idx[make_pair(e2,e1)]=i+1;
            adj[e1].push_back(e2);
            adj[e2].push_back(e1);
            // edges.push_back(make_pair(e1, e2));
        }
        // cout<<endl;
        dfs(idx,1,vis,adj,num);
        int ma=0;
        for(int i=1;i<=n;i++){
            ma=max(ma,num[i]);
        }
        cout<<ma<<endl;
       
    }
}