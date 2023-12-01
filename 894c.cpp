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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> vec;
        int init = n;
        // vec.push_back(n);
        vector<int> diff;
        diff.push_back(a[n - 1]);
        for (int i = n - 2; i >= 0; i--)
        {
            diff.push_back(a[i] - a[i + 1]);
        }
        vector<int> fin;
        int flag = 0;
        for (auto &it : diff)
        {
            for (int i = 0; i < it; i++)
            {
                fin.push_back(init);
                if (fin.size() > n)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }

            init--;
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
            // return 0;
        }
        else
        {

            vector<int> act;
            for (int i = 0; i < n; i++)
            {
                act.push_back(a[i]);
            }
            if (act.size() != fin.size())
            {
                cout << "NO" << endl;
            }
            else
            {
                if (act != fin)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
        // cout<<endl;
    }
}