#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool dfs(int source, vector<vector<int>> &ad, vector<int> &vis, int comp)
{
    vis[source] = comp;
    for (int i = 1; i < ad[source].size(); i++)
    {
        if (i == source)
        {
            continue;
        }
        if (ad[source][i] == 1 && (vis[i] == 0))
        {
            dfs(i, ad, vis, comp);
        }
    }
    return true;
}

class DisjointSet
{
    vector<int> rank, parent;

public:
    DisjointSet(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findpar(int u){
        if(u==parent[u]){
            return u;
        }
        else{
            return parent[u]=findpar(parent[u]);
        }
    }

    void unionByrank(int u,int v){
        // if(rank[)
        int up1=findpar(u);
        int up2=findpar(v);
        if(up1==up2){
            return ;
        }
        else if (rank[up1]>rank[up2]){
            parent[up2]=up1;
        }
        else if(rank[up2]>rank[up1]){
            parent[up1]=up2;
        }
        else{
            parent[up1]=up2;
            rank[up2]++;
        }
    }
};


int main()
{
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    vector<int> row(n + 1, 0);
    vector<int> r;
    vector<pair<int,int > > a1;
    vector<pair<int,int> > a2;
    vector<int> comp1(n + 1, 0);
    vector<int> comp2(n + 1, 0);
    int u, v;
    for (int i = 0; i < m1; i++)
    {
        cin >> u >> v;
        a1.push_back(make_pair(u,v));

    }
    for (int i = 0; i < m2; i++)
    {
        cin >> u >> v;
        a2.push_back(make_pair(u,v));
    }

    int count = 0;
    vector<pair<int, int>> fin;

    DisjointSet d1=DisjointSet(n);
    for(auto & it : a1 ){
        d1.unionByrank(it.first,it.second);
    }


    DisjointSet d2=DisjointSet(n);
    for(auto & it : a2){
        d2.unionByrank(it.first,it.second);
    }
    int up1,up2;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(d1.findpar(i)!=d1.findpar(j) && d2.findpar(i)!=d2.findpar(j)){
                d1.unionByrank(i,j);
                d2.unionByrank(i,j);
                count+=1;
                fin.push_back(make_pair(i,j));
            }
        }
    }



   

    cout << fin.size() << endl;
    for (auto &it : fin)
    {
        cout << it.first << " " << it.second << endl;
    }
}