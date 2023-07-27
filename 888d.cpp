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
        long long diff = 0;
        map<long long, long long> mp;
        for (long long i = 0; i < n - 1; i++)
        {

            cin >> a[i];
        }
        long long flag = 0;
        map<long long, long long> vis;
        long long count = 0;
        long long ind = 0;
        vector<long long> vec;
        for (long long i = 0; i < n - 2; i++)
        {
            vis[a[i + 1] - a[i]] += 1;

            if (vis[a[i + 1] - a[i]] == 2)
            {
                count += 1;
                ind = a[i + 1] - a[i];
            }
        }
        vis[a[0]]+= 1;
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long c = 0;

            for (long long i = 1; i <= n; i++)
            {
                if (vis[i] == 0)
                {
                    vec.push_back(i);
                    c += 1;
                }
            }
            if (c == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                if (count >= 2 || c > 2)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    if (vec.size() == 2)
                    {
                        if ((vis[vec[0] + vec[1]] == 2 && vec[0] + vec[1] <= n) || (vis[vec[0] + vec[1]] == 1 && vec[0] + vec[1] > n))
                        {
                            cout << "YES" << endl;
                        }
                        else
                        {
                            cout << "NO" << endl;
                        }
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
            }
        }
    }
}