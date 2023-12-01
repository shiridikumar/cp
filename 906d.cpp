#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n, c;
        cin >> n >> c;
        long long a[n];
        long long s = 0;
        long long flag = 0;
        vector<pair<long long, long long>> diffs;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
            {
                continue;
            }
            diffs.push_back(make_pair(a[i] - c*(i + 1), a[i]));
        }
        sort(diffs.begin(), diffs.end(), greater<pair<long long, long long>>());
        s += a[0];

        for (long long i = 0; i < diffs.size(); i++)
        {
            // cout<<s<<" "<<diffs[i].second<<" "<<diffs[i].second-diffs[i].first<<endl;
            if ((s + diffs[i].second) <  (diffs[i].second - diffs[i].first))
            {
                flag = 1;
                break;
            }
            s += diffs[i].second;
        }
        if (flag == 1)
        {
            // if (test == 10000 && tes == 102 && c > 1000)
            // {
            //     string st = "";
            //     for (int i = 0; i < n; i++)
            //     {
            //         st += to_string(a[i]);
            //         st.push_back(',');
            //     }
            //     // if (st == "0,0,0,0,0,1,0,0,1,1,0,1,")
            //     // {
            //     //     cout << "NO" << endl;
            //     // }
            //     // else
            //     // {
            //     st.push_back(':');
            //     st += to_string(c);
            //     // st.push_back(c+'0');
            //     cout << st << endl;
            //     // }
            // }
            // else
            // {
                cout << "NO" << endl;
            // }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

