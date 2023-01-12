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
        vector<long long> first;
        vector<long long> second;
        cin >> n;
        for (long long i = 1; i <= ceil((1.0 * n * n) / 2); i++)
        {
            first.push_back(i);
        }
        for (long long i = first[first.size() - 1]; i <= n * n; i++)
        {
            second.push_back(i);
        }
        // for (long long i = 0; i < first.size(); i++)
        // {
        //     cout << first[i] << " ";
        // }
        // cout << endl;
        reverse(second.begin(), second.end());
        // for (long long i = 0; i < second.size(); i++)
        // {
        //     cout << second[i] << " ";
        // }
        // cout << endl;
        long long fp = 0;
        long long sp = 0;
        long long mat[n][n];
        long long ind = 0;
        long long ele = 0;
        for (long long i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (long long j = 0; j < n; j++)
                {
                    if (ind % 2 == 0)
                    {
                        ele = first[fp];
                        fp++;
                    }
                    else
                    {
                        ele = second[sp];
                        sp++;
                    }
                    mat[i][j] = ele;
                    ind += 1;
                }
            }
            else
            {
                for (long long j = n - 1; j >= 0; j--)
                {
                    if (ind % 2 == 0)
                    {
                        ele = first[fp];
                        fp++;
                    }
                    else
                    {
                        ele = second[sp];
                        sp++;
                    }
                    mat[i][j] = ele;
                    ind += 1;
                }
            }
        }
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
}