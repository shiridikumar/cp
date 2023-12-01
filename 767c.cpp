#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ind = 0;
        int flag = 0;
        int curr_max = 0;
        vector<int> fin;
        vector<int> vis(n + 1, -1);
        vector<int> seen(n + 1, -1);
        map<int,int> mp;
        for(int i=n;i>=0;i--){
            mp.insert(make_pair(i,INT_MAX));
        }
        for(int i=n-1;i>=0;i--){
            if(mp.find(a[i])!=mp.end()){
                mp.erase(a[i]);
            }
            vis[i]=mp.begin()->first;
        }
        // for(int i=n-1;i>=0;i--){
        //     cout<<seen[i]<< " ";
        // }
        // cout<<endl;


        while (ind < n)
        {

            int temp=vis[ind];
            fin.push_back(temp);
            int num = 0;
            // cout<<ind<<" "<<temp<<endl;
            for (int i = ind; i < n; i++)
            {
                if (seen[a[i]] != ind && a[i] < temp)
                {
                    num += 1;
                    seen[a[i]] = ind;
                }
                if (num == temp)
                {
                    ind = i + 1;
                    break;
                }
            }
            // if (fin.size() > 100)
            // {
            //     break;
            // }
        }
        cout << fin.size() << endl;
        for (auto &it : fin)
        {
            cout << it << " ";
        }
        if (fin.size() > 0)
        {
            cout << endl;
        }
    }
}