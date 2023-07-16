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
        string s;
        cin >> s;
        long long lp = 0;
        long long c = 0;
        vector<long long> vec;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                c += 1;
                vec.push_back(i);
            }
        }
        if (c == 0 || c == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            long long median = vec[c / 2];
            // cout<<median<<endl;
            long long l = median;
            long long count = 0;
            for (long long i = median; i >= 0; i--)
            {
                if (s[i] == '*')
                {
                    count += l - i;
                    l -= 1;
                }
            }
            long long r = median + 1;
            for (long long i = median+1; i < n; i++)
            {
                if (s[i] == '*')
                {
                    count += i - r;
                    r += 1;
                }
            }
            cout << count << endl;
        }
    }
}