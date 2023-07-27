#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void dfs(long long source, vector<long long> &vis, long long *sum, long long k, vector<vector<long long>> &adj)
{
    vis[source] = 1;
    for (long long i = 0; i < adj[source].size(); i++)
    {
        *sum += k - 1 - (adj[source].size() - 1) - (adj[adj[source][i]].size() - 1);
        if (vis[adj[source][i]] == 0)
        {
            dfs(adj[source][i], vis, sum, k, adj);
        }
    }
}

int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        vector<long long> vec;
        vector<long long> r;
        vector<vector<long long>> adj(a + b + 2, r);
        long long boys[k];
        long long girls[k];
        for (long long i = 0; i < k; i++)
        {
            cin >> boys[i];
            vec.push_back(b + boys[i]);
        }

        for (long long i = 0; i < k; i++)
        {
            cin >> girls[i];
            adj[b + boys[i]].push_back(girls[i]);
            adj[girls[i]].push_back(b + boys[i]);
            vec.push_back(girls[i]);
        }
        vector<long long> vis(a + b + 2, 0);
        long long sum = 0;
        for (long long i = 0; i < vec.size(); i++)
        {
            if (vis[vec[i]] == 0)
            {
                dfs(vec[i], vis, &sum, k, adj);
            }
        }
        cout << sum / 4 << endl;
    }
}