#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n, m;
        cin >> n >> m;
        int d[n][n];
        string a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int mi = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int ind = 0; ind < n; ind++)
            {
                if (i != ind)
                {
                    int dist = 0;
                    for (int j = 0; j < m; j++)
                    {
                        dist += abs(int(a[i].at(j)) - int(a[ind].at(j)));
                    }
                    if (dist < mi)
                    {
                        mi = dist;
                    }
                }
            }
        }
        cout<< mi<< endl;
    }
}