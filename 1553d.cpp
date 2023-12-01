#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        string s, t;
        cin >> s >> t;
        s = "_" + s;
        vector<bool> all(s.size()+1,false);
        vector<bool> r(s.size() + 1, false);
        // vector<vector<bool>> dp(t.size(), r);  
        vector<bool> r1(s.size()+1,false);

        for (int i = t.size() - 1; i >= 0; i--)
        {
            for (int j = s.size() - 1; j >= 0; j--)
            {
                if (t[i] == s[j])
                {
                    if(i+1>=t.size() && j+2<s.size()){
                        r[j]=r[j+2];
                    }
                    else if(i==t.size()-1 && j==s.size()-1){
                        r[j]=true;
                    }
                    if(i+1<t.size() && j+1<s.size()){
                        r[j] = r1[j + 1];
                    }
                }
                if (j + 2 < s.size())
                {
                    r[j] = r[j] || r[j + 2];
                }
            }
            r1=r;
            r=all;

            // r=dp[i];
            
        }
        if(r1[0] || r1[1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}