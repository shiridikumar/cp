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
        vector<int> factor(n + 1, 0);
        vector<int> fac;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                factor[i] = 1;
                if (i != 1)
                {
                    fac.push_back(i);
                }
            }
        }
        int color = int('a');
        color += 1;
        vector<int> st(n, int('a'));
        st[0] = 'a';

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                st[i] = color;
            }
        }
        for (int j = 0; j < fac.size(); j++)
        {
            for(auto &it : st){
                cout<<it<<" ";
            }
            // cout<<"___"<<fac[j]<<endl;

            for (int i = 0; i < n; i++)
            {
                if(i<fac[j]){
                    continue;
                }
                if(i%(2*fac[j])!=0){
                    // cout<<i-fac[j]<<"*****"<<endl;
                    if(i<2*fac[j]){
                        if(st[i]==st[i-fac[j]]){
                            color+=1;
                            st[i]=color-1;
                        }   
                    }
                    else{
                        st[i]=st[i-2*fac[j]];
                    }
                }
            }
        }

        for (auto &it : st)
        {
            cout << char(it);
        }
        cout << endl;
    }
}