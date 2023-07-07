#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int dfs(long long source, map<long long, vector<long long>> &mp, long long n, vector<long long> &childs,vector<long long> &visited)
{
    visited[source]=1;
    int tot=0;
    for (long long i = 0; i < mp[source].size(); i++)
    {
        if(visited[mp[source][i]]==0){
            tot+=1;
            childs[source]+=dfs(mp[source][i], mp, n, childs,visited);
        }
        
    }
    if (tot==0)
    {
        childs[source]+=1;
    }
    return childs[source];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long e1, e2;
        map<long long, vector<long long>> gp;
        for (long long i = 0; i < n - 1; i++)
        {
            cin >> e1 >> e2;
            gp[e1].push_back(e2);
            gp[e2].push_back(e1);
        }
        vector<long long > childs(n+1,0);

        // for (long long i = 1; i < n; i++)
        // {
        //     childs[i] = 0;
        // }
        vector<long long > visited(n+1,0);
        dfs(1, gp, n, childs,visited);
        // vector<long long> nc(n+1,0);
        // for (auto &it : childs)
        // {
        //         nc[it.first]=it.second;
        // }
        long long q;
        cin>>q;
        ios_base::sync_with_stdio(false);
        long long x,y;
        for(long long i=0;i<q;i++){
            cin>>x>>y;
            long long p1=childs[x];
            long long p2=childs[y];
            cout<<p1*p2<<endl;
        }
    }
}