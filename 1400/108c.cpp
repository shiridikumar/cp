#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        cin >> n;
        long long univ[n];
        long long skill[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> univ[i];
        }

        vector<long long> r;
        vector<vector<long long>> teams(n + 1, r);
        vector<long long> univ_total(n+1,0);
        for (long long i = 0; i < n; i++)
        {
            cin >> skill[i];
            teams[univ[i]].push_back(skill[i]);
            univ_total[univ[i]]+=skill[i];
        }
        long long totsum=0;
        vector<long long> mods(n+1,0);
        for (long long i = 0; i < teams.size(); i++)
        {
            if (teams[i].size() > 0)
            {
                sort(teams[i].begin(), teams[i].end(), greater<long long>());
                long long suff=teams[i].size()-1;


                for (long long j = teams[i].size() - 2; j >= 0; j--)
                {
                    
                    teams[i][j]+=teams[i][j+1];
                    // suff=teams[i][j];
                }
                // for(auto &it: teams[i]){
                //     cout<<it<<"  , ";
                // }
                // cout<<endl;
                // totsum+=suff;
                long long ind=0;

                for (long long j = 1; j <=n; j++)
                {
                    if(teams[i].size()%j!=0){
                        mods[j]+=teams[i][0]-teams[i][teams[i].size()-teams[i].size()%j];
                    }
                    else{
                        // if(j==1){
                        //     cout<<teams[i][0]<<endl;
                        // }
                        mods[j]+=teams[i][0];
                    }
                    if(j>teams[i].size()){
                        break;
                    }
                }
            }
        }
        for(long long i=1;i<=n;i++){
            cout<<mods[i]<<" ";
        }
        cout<<endl;
    }
}