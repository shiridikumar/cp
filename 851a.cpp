#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long orig = 1;
        vector<int> pref(n, 0);
        long long tot = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                tot += 1;
            }
        }
        long long flag = 0;
        int ind = 0;
        pref[0] = (a[0] % 2 == 0);
        // cout << endl;
        for (long long i = 1; i < n; i++)
        {
            if (a[i] == 2)
            {
                pref[i] = pref[i - 1] + 1;
            }
            else
            {
                pref[i] = pref[i - 1];
            }
        }

        for (long long i = 0; i < n; i++)
        {
            if (pref[i] == tot - pref[i])
            {
                ind = i;
                flag = 1;
                break;
            }
        }

        // for (auto it : pref)
        // {
        //     cout << it << " ";
        // }
        // cout << endl;
        // if (tot == 0)
        // {
        //     cout << 1 << endl;
        // }

        // {

        if (flag == 1)
        {
            cout << ind + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        // }
    }
}