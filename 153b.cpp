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
        int flag = 0;
        bool yes = false;
        for (int i = 0; i < t.size(); i++)
        {
            int mid = i;
            int l = mid - 1, r = mid + 1;
            flag = 0;
            string left = "", right = "";
            right.push_back(t[mid]);
            while (l >= 0 && r < t.size())
            {
                if (t[l] != t[r])
                {
                    flag = 1;
                    break;
                }
                left.push_back(t[l]);
                right.push_back(t[r]);
                l--;
                r++;
            }
            while (r < t.size())
            {
                right.push_back(t[r]);
                r++;
            }
            while (l >= 0)
            {
                left.push_back(t[l]);
                l--;
            }
            reverse(right.begin(),right.end());
            reverse(left.begin(),left.end());
            left.push_back(t[mid]);
            if (flag == 0)
            {
                string fin = "";
                // cout<<right<<" "<<left<<" , "<<t[mid]<<endl;
                if (right.size() >= left.size())
                {
                    fin = right;
                }
                else
                {
                    fin = left;
                }
            
                auto pos = s.find(fin);
                if (pos != string::npos)
                {
                    // cout<<fin<<" "<<s<<" "<<right<<" , "<<left<<endl;
                    yes = true;
                    break;
                }
            }
            if(yes){
                break;
            }
        }
        if(yes){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}