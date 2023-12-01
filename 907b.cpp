#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n, q;
        cin >> n >> q;
        map<long long, long long> mp;
        long long a[n];
        long long ma = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long query[q];
        for (long long i = 0; i < q; i++)
        {
            cin >> query[i];
        }

        vector<long long> act;
        act.push_back(query[0]);
        for (long long i = 0; i < q; i++)
        {
            if (query[i] < act[act.size() - 1])
            {
                act.push_back(query[i]);
            }
        }

        map<long long, long long> nums;
        nums[act[act.size() - 1]] = pow(2, act[act.size() - 1] - 1);
        long long prev = pow(2, act[act.size() - 1] - 1);
        for (long long i = (long long)act.size() - 2; i >= 0; i--)
        {
            // if (act[i] + 1 == act[i + 1])
            // {
            //     nums[act[i]] = prev;
            //     continue;
            // }
            // else
            // {

            nums[act[i]] = prev + pow(2, act[i] - 1);
            prev=nums[act[i]];
            // }
        }

        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < act.size(); j++)
            {
                if (a[i] % (long long)pow(2, act[j]) == 0)
                {
                    a[i] += nums[act[j]];
                    break;
                }
            }
            cout << a[i] << " ";
        }
        cout << endl;
        // cout<<endl;
        // cout<<log2(268435458)<<endl;
        // cout<<endl;
    }
}