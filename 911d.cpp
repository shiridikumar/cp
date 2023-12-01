#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin >> test;
    vector<long long> r;
    vector<vector<long long>> divisors(1e5 + 1, r);

    for (long long i = 1; i <= 1e5; i++)
    {
        for (long long j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                divisors[i].push_back(j);
            }
            if (i%j==0 && j != i / j)
            {
                divisors[i].push_back(i / j);
            }
        }
        sort(divisors[i].begin(), divisors[i].end(), greater<long long>());
    }

    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        cin >> n;
        long long a[n];
        // cout<<"???"<<endl;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // cout<<"*******"<<endl;
        sort(a, a + n);
        vector<long long> vec(1e5 + 1, 0);
        vector<long long> tem(1e5 + 1, 0);
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            for (auto &it : divisors[a[i]])
            {
                // cout<<vec[it]<<"---"<<tem[it]<<"->"<<it<<endl;
                ans += it * (vec[it] - tem[it]) * (n-1-i);
                long long val=vec[it]-tem[it];

                for (auto &div : divisors[it])
                {
                    tem[div] += val;
                    // cout << div << " ";
                }
                // cout<<endl;
            }

            for (auto &it : divisors[a[i]])
            {
                vec[it] += 1;
                for (auto &div : divisors[it])
                {
                    tem[div] = 0;
                }
            }
            // cout<<ans<<"***"<<endl;

        }

        cout <<ans << endl;
    }
}