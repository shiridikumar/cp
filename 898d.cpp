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
        string s;
        cin >> s;
        int mi = INT_MAX;
        int ma = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                mi = min(i, mi);
                ma = max(i, ma);
            }
        }
        if (mi == INT_MAX && ma == INT_MIN)
        {
            cout << 0 << endl;
        }
        else
        {

            cout << ceil((float)(ma - mi+1) * (1.0) / ((1.0) * (k))) <<"***"<< endl;
        }
    }
}