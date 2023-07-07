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
        if (n == 1)
        {
            if (s == "1")
            {
                cout << "DRAW" << endl;
            }
            else
            {
                cout << "BOB" << endl;
            }
        }
        else
        {
            int c = 0;
            for (int i = 0; i < s.size() ; i++)
            {
                if (s[i] == '0')
                {
                    c += 1;
                }
            }
            if (n % 2 == 1 && s[n/2]=='0' && c>1)
            {
                cout<<"ALICE"<<endl;
            }
            else
            {
                cout<<"BOB"<<endl;
            }
        }
    }
}