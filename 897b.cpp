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
        int lp = 0;
        int count = 0;
        int rp = s.size() - 1;
        while (lp < rp)
        {
            if (s[lp] != s[rp])
            {
                count += 1;
            }
            lp++;
            rp--;
        }
        string res = "";
        for(int i=0;i<=n;i++){
            res.push_back('0');
        }
        if (n % 2 == 0)
        {
            for (int i = count; i <= n-count; i+=2)
            {
                res[i]='1';
            }
        }
        else{
            for (int i = count; i <= n-count; i++)
            {
                res[i]='1';
            }

        }
        cout<<res<<endl;
    }
}