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
        cin>>s;
        int one = 0;

        int zero = 0;
        vector<int> prefix(s.size() + 1, 0);

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zero += 1;
            }
            else
            {
                one += 1;
            }
        }
        

        if (s[0] == '0')
        {
            prefix[0] = 1;
        }
        for (int i = 1; i < s.size(); i++)
        {
            prefix[i] = prefix[i - 1];
            if (s[i] == '0')
            {
                prefix[i] += 1;
            }
        }
        int curr = INT_MAX;

        for (int i = 0; i < s.size(); i++)
        {
            int num=i+1-prefix[i];
            int right=min(zero-prefix[i],one-num);

            int num2=prefix[i];
            curr=min(min(num+right,num2+right),curr);
        }
        cout<<curr<<endl;
    }
}

