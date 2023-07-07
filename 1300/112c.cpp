#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n;
        cin >> n;
        vector<int> r(n, 0);
        vector<vector<int>> a(2, r);
        vector<int> pref(n, 0);
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        pref[0] = a[1][0];
        for (int i = 1; i < n-1; i++)
        {
            pref[i] = pref[i - 1] + a[1][i];
        }
        if(n>=2)
            pref[n-1]=pref[n-2];
        else
            pref[n-1]=0;

        vector<int> suff(n, 0);
        suff[n - 1] = a[0][n - 1];
        for (int i = n - 2; i > 0; i--)
        {
            suff[i] = suff[i + 1] + a[0][i];
        }
        if(n>=2){
            suff[0]=suff[1];
        }
        else{
            suff[0]=0;
        }
        int mi = INT_MAX;
        int left, right;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                left = 0;
            }
            else
            {
                left = pref[i - 1];
            }
            if (i == n - 1)
            {
                right = 0;
            }
            else
            {
                right = suff[i + 1];
            }
            mi = min(mi, max(left, right));
        }
        cout << mi << endl;
    }
}