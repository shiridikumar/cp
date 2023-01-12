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
        int a[n];
        vector<int> vis(n + 1, 0);
        map<int, vector<int > > ind;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
            ind[a[i]].push_back(i);
            

        }
        vector<int> a1(n, -1);
        vector<int> a2(n, -1);
        vector<int> nl1;
        vector<int> nl2;
        sort(a, a + n);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < i + 1 || ind[a[i]].size() > 2)
            {
                flag = 1;
            }
        }
        ind.clear();
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else if(n==1){
            cout<<"YES"<<endl;
            cout<<1<<endl<<1<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            reverse(a, a + n);
            for(int i=0;i<n;i++){
                ind[a[i]].push_back(i);
            }
            int c1 = 1;
            int c2 = 1;
            vector<int> vis1(n + 1, 0);
            vector<int> vis2(n + 1, 0);
            for (int i = 0; i < n; i++)
            {

                if (vis1[a[i]] != 1)
                {

                    a1[i]=a[i];
                    vis1[a[i]] = 1;
                }
                else
                {
                    a2[i]=a[i];
                    vis2[a[i]] = 1;
                }
            }
            for (int i = a1.size() - 1; i >= 0; i--)
            {
                if (a1[i] == -1)
                {
                    continue;
                }
                if (a1[i] != c1)
                {
                    for (int j = c1; j < a1[i]; j++)
                    {
                        nl1.push_back(j);
                    }
                }
                c1 = a1[i] + 1;
            }
            for (int i = a2.size() - 1; i >= 0; i--)
            {
                if (a2[i] == -1)
                {
                    continue;
                }
                if (a2[i] != c2)
                {
                    for (int j = c2; j < a2[i]; j++)
                    {
                        nl2.push_back(j);
                    }
                }
                c2 = a2[i] + 1;
            }
            
            for(int i=c1;i<=n;i++){
                nl1.push_back(i);
            }
            // if(nl2.size()==0 && a2[0]==-1){
                for(int i=c2;i<=n;i++){
                    nl2.push_back(i);
                }
            // }
            // for(int i=0;i<n;i++){
            //     cout<<a1[i]<<" ";
            // }
            // cout<<endl;
            //  for(int i=0;i<n;i++){
            //     cout<<a2[i]<<" ";
            // }
            // cout<<endl;

            // cout<<nl1.size()<<" "<<nl2.size()<<endl;
            for (int i = 0; i < n; i++)
            {
                if (a1[i]==a[i])
                {
                    a2[i] = nl2[nl2.size() - 1];
                    nl2.pop_back();
                }
                else
                {
                    a1[i] = nl1[nl1.size() - 1];
                    nl1.pop_back();
                }
            }
            vector<int>  final;
            vector<int> final2;
            for(int i=0;i<n;i++){
                final.push_back(a1[ind[b[i]][ind[b[i]].size()-1]]);
                final2.push_back(a2[ind[b[i]][ind[b[i]].size()-1]]);
                ind[b[i]].pop_back();
            }

            for (int i = 0; i < n; i++)
            {
                cout << final[i] << " ";
            }
            cout<<endl;
            for (int i = 0; i < n; i++)
            {
                cout << final2[i] << " ";
            }
            cout << endl;

        }

    }
}