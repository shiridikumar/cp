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
        long long a[4 * n];
        vector<long long> vec;
        map<long long, long long> mp;
        long long prod = 1;

        for (long long i = 0; i < 4 * n; i++)
        {
            cin >> a[i];
            mp[a[i]] += 1;
            if (mp[a[i]] % 2 != 0)
            {
                vec.push_back(a[i]);
            }
        }
        int flag = 0;
        for (auto &it : mp)
        {
            if (it.second % 2 != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            sort(vec.begin(), vec.end());
            // cout << mp[1] << " " << mp[7] << endl;
            int start = vec[0] * vec[2 * n - 1];
            for (int i = 1; i < vec.size() / 2; i++)
            {
                if (vec[i] * vec[vec.size() - 1 - i] != start)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}