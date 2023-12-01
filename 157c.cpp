#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<string> a(n, "");
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<pair<long long, long long>, long long> diff;

    map<pair<long long, long long>, long long> diff2;
    vector<long long> sums(n, 0);
    long long ind = 0;
    for (auto &it : a)
    {
        long long tot = 0;
        for (long long i = 0; i < it.size(); i++)
        {
            tot += it[i] - '0';
        }
        sums[ind] = tot;
        ind++;
        long long prefix = 0;
        // diff[make_pair(tot, it.size())] += 1;
        for (long long i = 0; i < it.size(); i++)
        {
            prefix += it[i] - '0';
            long long suffix = tot - prefix;
            long long index = i + 1;
            long long rem = it.size() - index;
            if (rem - index > 0)
            {
                diff[make_pair(suffix - prefix, rem - index)] += 1;
            }
            else{
                diff2[make_pair(prefix-suffix, index-rem)]+=1;
            }
        }
        prefix = 0;
    }

    // for (auto &it : diff)
    // {
    //     cout << it.first.first << " " << it.first.second << " -> " << it.second << endl;
    // }
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        if (diff.find(make_pair(sums[i], a[i].size())) != diff.end())
        {
            ans += diff[make_pair(sums[i], a[i].size())];
        }

        if (diff2.find(make_pair( sums[i], a[i].size())) != diff2.end())
        {
            ans += diff2[make_pair(sums[i], a[i].size())]-1;
        }
    }
    // cout << endl;
    cout << ans+n << endl;
}