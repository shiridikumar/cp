#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        vector<int> costs;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            costs.push_back(i+1 + a[i]);
        }
        // priority_queue<int, vector<int>, greater<int>> pq;
        sort(costs.begin(),costs.end());
        // for(int i=0;i<costs.size();i++){
        //     cout<<costs[i]<<" ";
        // }
        cout<<endl;
        int count=0;
        for(int i=0;i<costs.size();i++){
            if(c<costs[i]){
                break;
            }
            else{
                count+=1;
                c-=costs[i];
            }
        }
        cout<<count<<endl;
    }
}