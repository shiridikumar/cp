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
        map<long long, long long> counts;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            counts[a[i]] += 1;
        }
        sort(a, a + n);
        long long ind = 0;
        for (auto &it : counts)
        {
            if (ind != it.first)
            {
                break;
            }
            ind++;
        }
        if (ind == 0)
        {
            cout << 0 << endl;
        }
        else
        {

            vector<long long> vec;
            for (long long i = 0; i <= ind; i++)
            {
                vec.push_back(i);
            }
            vector<long long> mex(n+1,0);
            mex[0] = 0;

            for (long long i = 1; i < vec.size(); i++)
            {
                long long mi = LONG_LONG_MAX;
                for (long long j = i - 1; j >= 0; j--)
                {
                    if (j == 0)
                    {
                        mi = min(mi, vec[i] * (counts[vec[j]]-1)+vec[j]);
                    }
                    else
                    {
                        mi = min(mi, vec[i] * (counts[vec[j]]-1) + mex[vec[j]]+vec[j]);
                    }
                }
                mex[vec[i]] = mi;
            }
            cout<<mex[ind]<<endl;
        }
    }
}