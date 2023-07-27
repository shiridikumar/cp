#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dfs(long long source, vector<long long> &vis, vector<vector<pair<long long, long long>>> &adj, int prev, int height,map<pair<int,int>,int > & mp)
{
    vis[source] = 1;
    int cnt = 0;
    // cout<<source<<endl;
    for (long long i = 0; i < adj[source].size(); i++)
    {
        // cout<<"*************************"<<adj[source][i].first<<endl;

        if (vis[adj[source][i].first] == 0)
        {
            // if(source==2){
            //     cout<<cnt<<"----"<<source<<endl;
            // }
            cnt += 1;
            if (cnt == 2 && height != 0)
            {
                // cout<<"**********"<<endl;
                return -1;
            }

            if (cnt > 2)
            {
                // cout<<"**********"<<endl;
                return -1;
            }

            if (prev == 2)
            {
                adj[source][i].second = 11;
                int mi=min(source,adj[source][i].first);
                int ma=max(source,adj[source][i].first);
                mp[make_pair(mi,ma)]=11;
                // adj[i][source].second = 11;
                prev = 11;
            }
            else
            {

                adj[source][i].second = 2;
                 int mi=min(source,adj[source][i].first);
                int ma=max(source,adj[source][i].first);
                mp[make_pair(mi,ma)]=2;
                // adj[i][source].second = 2;
                prev = 2;
            }
            int temp = dfs(adj[source][i].first, vis, adj, prev, height + 1,mp);
            if (temp == -1)
            {
                // cout<<source<<endl;
                return -1;
            }
        }
    }
    return 1;
}

int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> r;
        long long t1, t2;
        int mi,ma;
        map<int,pair<int,int> > index;
        vector<vector<pair<long long, long long>>> adj(n + 1, r);
        for (long long i = 0; i < n - 1; i++)
        {
            cin >> t1 >> t2;
            adj[t1].push_back(make_pair(t2, 0));
            adj[t2].push_back(make_pair(t1, 0));
            mi=min(t1,t2);
            ma=max(t1,t2);
            index[i]=make_pair(mi,ma);
        }
        vector<long long> vis(n + 1, 0);
        map<pair<int,int> ,int > mp;
        int flag = 0;
        for (long long i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                flag = dfs(i, vis, adj, 11, 0, mp);
                if (flag == -1)
                {
                    break;
                }
            }
        }
        if (flag == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n-1; i++)
            {

                cout << mp[index[i]] << " ";
            }
            cout<<endl;
        }
        // cout<<flag<<endl;
    }
}