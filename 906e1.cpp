#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int day1, day2;
        vector<int> counts(n + 1, 0);
        vector<pair<int, int>> rains;
        map<int, vector<int>> mp_start;
        map<int, vector<int>> mp_end;
        // string st = "";
        for (int i = 0; i < m; i++)
        {
            cin >> day1 >> day2;
            // st += to_string(day1) + "_" + to_string(day2) + ",";
            counts[day1 - 1] += 1;
            counts[day2] -= 1;
            mp_start[day1 - 1].push_back(i);
            mp_end[day2].push_back(i);
        }
        // st += ":" + to_string(n);

        set<int> s;
        vector<set<int>> vecs(n);
        int sum = 0;
        int num = 0;
        for (int i = 0; i < n; i++)
        {
            sum += counts[i];
            if (mp_start.find(i) != mp_start.end())
            {
                for (auto &it : mp_start[i])
                {
                    s.insert(it);
                }
            }
            if (mp_end.find(i) != mp_end.end())
            {
                for (auto &it : mp_end[i])
                {
                    s.erase(it);
                }
            }
            if (s.size() <= 2 && s.size() > 0)
            {
                vecs[i] = s;
            }
            if (sum == 0)
            {
                num += 1;
            }
        }
        map<pair<int, int>, int> mp_pair;
        map<int, int> mp_single;
        vector<int> available;
        for (int i = 0; i < n; i++)
        {
            // cout<<i<<" : ";
            // for(auto &it : vecs[i]){
            //     cout<<it<<" ";
            // }
            // cout<<endl;
            if (vecs[i].size() == 2)
            {
                mp_pair[make_pair(*vecs[i].begin(), *std::next(vecs[i].begin(), 1))] += 1;
            }
            else
            {
                if (vecs[i].size() == 1)
                {
                    mp_single[*vecs[i].begin()] += 1;
                }
            }
        }

        int ma = 0;
        map<int, bool> seen;
        for (auto &it : mp_pair)
        {
            int temp = it.second;
            if (mp_single.find(it.first.first) != mp_single.end())
            {
                temp += mp_single[it.first.first];
                seen[it.first.first] = true;
            }
            if (mp_single.find(it.first.second) != mp_single.end())
            {
                temp += mp_single[it.first.second];
                seen[it.first.second] = true;
            }
            // cout << temp << " ****  " << it.first.first << "***  " << it.first.second << endl;
            ma = max(ma, temp);
        }

        for (auto &it : mp_single)
        {
            // if (seen.find(it.first) == seen.end())
            // {
                available.push_back(it.second);
            // }
        }
        sort(available.begin(), available.end(), greater<int>());
        if (available.size() >= 1)
        {
            ma = max(ma, available[0]);
            if (available.size() > 1)
            {
                ma = max(ma, available[0] + available[1]);
            }
        }

        // if (tes == 137)
        // {
        //     cout << st << endl;
        // }
        // else
        // {
            cout << ma + num << endl;
        // }
    }
}