#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        int neg = 0;
        int pos = 0;
        int curr = a;
        int flag = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '-')
            {
                curr -= 1;
                neg += 1;
            }
            if (s[i] == '+')
            {
                curr += 1;
                pos += 1;
            }
            if (curr >= n)
            {
                flag = 1;
            }
        }

        if (pos + a < n)
        {
            cout << "NO" << endl;
        }
        else if (flag == 1 || a>=n)
        {
            cout << "YES" << endl;
        }
        else if (flag == 0)
        {
            cout << "MAYBE" << endl;
        }
    }
}