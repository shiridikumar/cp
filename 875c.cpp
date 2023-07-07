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
        int e1, e2;
        vector<pair<int, int>> edges;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> e1 >> e2;
            edges.push_back(make_pair(e1, e2));
        }
        map<int, int> comp;
        map<int, int> reads;
        map<int, int> read;
        int cm = 2;
        comp[1] = 1;
        reads[1] = 1;
        read[1] = 1;

        for (int i = 0; i < edges.size(); i++)
        {
            if (!(read[edges[i].second]))
            {
                if (read[edges[i].first])
                {
                    if (!(comp[edges[i].second]))
                    {
                        comp[edges[i].second] = comp[edges[i].first];
                        reads[comp[edges[i].second]] = reads[comp[edges[i].first]];
                    }
                    else
                    {
                        reads[comp[edges[i].second]] +=reads[comp[edges[i].first]];
                    }
                    read[edges[i].second] = 1;
                    // cout<<edges[i].first<<" ****** "<<edges[i].second<<endl;
                }
                else
                {
                    if (!(comp[edges[i].first]))
                    {
                        comp[edges[i].first] = cm;
                        comp[edges[i].second] = cm;
                        reads[cm]+=1;
                        // cout<<cm<<"(((((((((("<<endl;
                        cm += 1;
                    }
                    else{
                        comp[edges[i].second]=comp[edges[i].first];
                    }
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << comp[i] << " ";
        }
        cout << endl;
        cout<<"*****"<<endl;
        for (auto it = reads.begin(); it != reads.end(); it++)
        {
            cout << (*it).first << " " << (*it).second << endl;
        }
    }
}