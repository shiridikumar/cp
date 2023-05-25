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
        string s;
        cin >> n;
        cin >> s;
        int r = 0;
        int u = 0;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                r += 1;
            }
            else if (s[i] == 'L')
            {
                r -= 1;
            }
            else if (s[i] == 'U')
            {
                u += 1;
            }
            else
            {
                u -= 1;
            }
            // cout<<u<<" "<<r<<endl;
            if (r == 1 && u == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}