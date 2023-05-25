#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp1;
        map<char, int> mp2;
        vector<int> pref1(n, 0);
        vector<int> pref2(n, 0);
        pref1[0] = 1;
        pref2[0] = 0;
        mp1[s[0]]=2;
        for (int i = 1; i < n; i++)
        {
            if (mp1.find(s[i]) == mp1.end())
            {
                pref1[i] = pref1[i - 1] + 1;
                mp1[s[i]] = 2;
            }
            else
            {
                pref1[i] = pref1[i - 1];
            }
        }
        pref2[n - 1] = 1;
        mp2[s[n-1]]=2;
        for (int i = n - 2; i >= 0; i--)
        {
            if (mp2.find(s[i]) == mp2.end())
            {
                pref2[i] = pref2[i + 1] + 1;
                mp2[s[i]] = 2;
            }
            else
            {
                pref2[i] = pref2[i + 1];
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << pref1[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << pref2[i] << " ";
        // }
        // cout << endl;
        int curr = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {

                curr = max(curr,pref1[i]);
            }
            else
            {
                curr = max(curr, (pref1[i] + pref2[i + 1]));
            }
        }
        cout << curr<< endl;
    }
}