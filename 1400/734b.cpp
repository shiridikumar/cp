#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        int mod = k;
        int counter = 0;
        vector<int> colors(n, 0);
        vector<int> prev(k + 1, -1);
        vector<int> clr_count(k + 1, 0);
        sort(a, a + n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (prev[(count % mod) + 1] != a[i])
            {
                colors[i] = (count % mod) + 1;
                clr_count[(count % mod) + 1] += 1;
                prev[(count % mod) + 1] = a[i];
                count += 1;
            }
        }
        int mi = INT_MAX;
        for (int i = 1; i <= k; i++)
        {
            mi = min(clr_count[i], mi);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (clr_count[colors[i]] > mi)
            {
                clr_count[colors[i]] -= 1;
                colors[i] = 0;
            }
        }
        vector<int> r;
        vector<vector<int> > vec(n+1,r);
        for(int i=0;i<n;i++){
            vec[a[i]].push_back(colors[i]);
        }
        vector<int> p(n+1,0);
        for(int i=0;i<n;i++){
            int pointer=p[b[i]];
            cout<<vec[b[i]][pointer]<<" ";
            p[b[i]]+=1;
        }

    }
}