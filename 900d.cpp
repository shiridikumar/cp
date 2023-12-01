#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int start, int end, vector<pair<int, int>> &vec)
{
    int odd = 1;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (odd == 1)
        {
            // cout<<vec[i].first<<" "<<vec[i].second<<endl;
            int si = vec[i + 1].first - vec[i].first;
            reverse(s.begin() + vec[i].first, s.begin() + vec[i].first + si);
            reverse(s.begin() + vec[i + 1].second + 1, s.begin() + vec[i + 1].second + si +1);

            string rep = s.substr(vec[i + 1].second + 1, si);
            // cout << rep << endl;
            s.replace(vec[i + 1].second + 1, si, s.substr(vec[i].first, si));
            s.replace(vec[i].first, si, rep);
        }
        odd = 1 - odd;
    }
    if (odd = 1)
    {
        // int si1 = vec[vec.size() - 1].second - vec[vec.size() - 1].first;
        if(start!=10000){
            reverse(s.begin() + vec[vec.size() - 1].first, s.begin() + vec[vec.size() - 1].second+1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n, k;
        cin >> n >> k;
        string dup;
        string s;
        cin >> s;
        dup = s;
        int l[k];
        int r[k];
        for (int i = 0; i < k; i++)
        {
            cin >> l[i];
            // cout<<l[i]<<" ";
        }
        // cout<<endl;
        for (int i = 0; i < k; i++)
        {
            cin >> r[i];
            // cout<<r[i]<<" ";
        }
        // cout<<endl;
        int q;
        cin >> q;
        int queries[q];
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i];
        }
        sort(queries, queries + q);

        vector<pair<int, int>> vec;
        map<int, vector<pair<int, int>>> mp;
        int ind = 0;

        for (int i = 0; i < q; i++)
        {
            if (queries[i] >= l[ind] && queries[i] <= r[ind])
            {
                pair<int, int> p = make_pair(min(l[ind] + r[ind] - queries[i], queries[i]), max(l[ind] + r[ind] - queries[i], queries[i]));
                p.first -= 1;
                p.second -= 1;
                if (!(vec.empty()) && vec[vec.size() - 1] == p)
                {
                    vec.pop_back();
                }
                else
                {
                    vec.push_back(p);
                }
            }
            else
            {
                if (vec.size() != 0)
                {
                    mp[ind] = vec;
                    vec.clear();
                }
                ind += 1;
                pair<int, int> p = make_pair(min(l[ind] + r[ind] - queries[i], queries[i]), max(l[ind] + r[ind] - queries[i], queries[i]));
                p.first -= 1;
                p.second -= 1;
                if (!(vec.empty()) && vec[vec.size() - 1] == p)
                {
                    vec.pop_back();
                }
                else
                {
                    vec.push_back(p);
                }
            }
        }

        if (vec.size() != 0)
        {
            mp[ind] = vec;
        }
        for (auto &it : mp)
        {
            reverse(s, test, it.second[0].second, it.second);
        }
        cout << s << endl;
    }
}