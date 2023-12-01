#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long flag = 1;
        long long ma = 0;
        map<long long,long long> vis;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            vis[a[i]]=1;
        }

        long long mex=0;
        vector<long long> res;
        while(res.size()<=n+1){
            if(vis.find(mex)==vis.end()){
                res.push_back(mex);
            }
            mex++;
        }
        long long nex;
        long long curr=0;
        cout<<res[curr]<<endl;
        curr+=1;
        long long turns=1;
        while(turns<=2*n+1){
            cin>>nex;
            if(nex<0){
                break;
            }
            if(nex<=res[curr]-1){
                cout<<nex<<endl;
            }
            else{
                cout<<res[curr]<<endl;
                curr++;
            }
            turns+=2;

        }

    }
    return 0;
}