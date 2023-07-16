#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n, m, x;
        cin >> n >> m >> x;
        long long a[n];
        long long b[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        long long dir = 0;
        vector<long long> r;
        vector<vector<long long>> tower_nos(x + 1, r);
        vector<long long> towers(m, 0);
        long long ind = 0;
        long long div = n - n % m;



        priority_queue<pair<long long, long long>> pq;
        while (ind < n)
        {
            for (long long i = ind; i < ind + m; i++)
            {
                pq.push(make_pair(towers[i - ind], i - ind));
                // cout<<pq.top().first<<" , "<<pq.top().second<<endl;
            }
            if (ind == div)
            {
                int p = ind;
                for (long long i = ind; i < ind + m; i++)
                {
                    if ((i - ind) < (m - (n % m)))
                    {
                        towers[i - ind] = pq.top().first;
                        pq.pop();
                        continue;
                    }
                    else
                    {
                        towers[pq.top().second] = pq.top().first + a[p];
                        tower_nos[a[p]].push_back(pq.top().second);
                        // cout << pq.top().second << "---" << pq.top().first << endl;

                        pq.pop();
                        p += 1;
                    }
                }
                ind = n;
                break;
            }

            for (long long i = ind; i < ind + m; i++)
            {
                towers[pq.top().second] = pq.top().first + a[i];
                tower_nos[a[i]].push_back(pq.top().second);
                // cout << pq.top().second << "---" << towers[pq.top().second] << endl;
                pq.pop();
            }
            ind += m;
        }



        vector<long long> pointers(x + 1, 0);
        long long ma = LONG_LONG_MIN;
        long long mi = LONG_LONG_MAX;
        for (long long i = 0; i < m; i++)
        {
            mi = min(mi, towers[i]);
            ma = max(ma, towers[i]);
        }
        if (ma - mi > x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (long long i = 0; i < n; i++)
            {
                long long p = pointers[b[i]];
                cout << tower_nos[b[i]][p] + 1 << " ";
                pointers[b[i]] += 1;
            }
            cout << endl;
        }
    }
}