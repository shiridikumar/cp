#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        string s;
        cin >> s;
        s.push_back('-');
        int count = 0;
        if (s.size() == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < s.size() - 2; i++)
            {
                if(s[i]=='-'){
                    continue;
                }
                if (s[i] == s[i + 1] && s[i] == s[i + 2])
                {
                    s[i + 1] = '-';
                    s[i + 2] = '-';
                    count += 2;
                }
                else
                {
                    if (s[i] == s[i + 1])
                    {
                        s[i + 1] = '-';
                        count += 1;
                    }
                    else if (s[i] == s[i + 2])
                    {
                        s[i + 2] = '-';
                        count += 1;
                    }
                }
                // cout<<s<<endl;
            }
            cout << count << endl;
        }
    }
}