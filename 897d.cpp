#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int dfs(vector<int> &vis, int *a, int round, int start, int source, int k,vector<int> &prev, int curr)
{
    if(prev[source]!=0 && prev[source]!=curr){
        return 0;
    }
    if(vis[source]!=0 && round-vis[source]!=k){
        return -1;
    }
    if (vis[source] !=0)
    {
        return 0;
    }
    vis[source] = round;
    prev[source]=curr;
    int ans = dfs(vis, a, round + 1, start, a[source], k,prev,curr);
    if (ans == -1)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i + 1];
            // a[i+1]-=1;
        }
        vector<int> vis(n + 1, 0);
        int round = 1;
        int depth = 1;
        int res = 0;
        int flag = 0;
        int curr=1;
        vector<int> prev(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                res = dfs(vis, a, 1, i, i, k,prev,curr);
                curr+=1;
                if (res == -1)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (k == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] != i)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}