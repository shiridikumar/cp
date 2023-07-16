#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    vector<int> row(2 * 1e5 + 1, 0);
    vector<vector<int> > pref(ceil(log2(2 * 1e5 + 1)), row);
    for (int i = 1; i <= 2 * 1e5; i++)
    {
        int ind = i;
        int iter = 0;
        while (ind > 0)
        {
            pref[iter][i] = pref[iter][i - 1] +( ind%2==1);
            ind = ind >> 1;
            // if(i==10){
            //     cout<<pref[iter][i - 1] +( ind%2==1)<<endl;
            // }
            iter += 1;
        }
    }
    for (int tes = 0; tes < test; tes++)
    {
        int l, r;
        cin >> l >> r;
        int curr=0;
        // cout<<pref[0].size()<<endl;
        for(int i=0;i<ceil(log2(max(l,r)));i++){
            int temp=pref[i][r]-pref[i][l-1];
            curr=max(curr,temp);
        }
        if(l==r){
            cout<<0<<endl;
        }
        else{
            cout<<r-l+1-curr<<endl;
        }
    }
}