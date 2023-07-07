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
        long long a[n];
        long long b[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long long preva = 0;
        long long prevb = 0;
        long long temp = 0;
        long long c = 0;
        long long curr = 0;
        map<long long, long long> mp1;
        map<long long, long long> mp2;
        long long cont = 1;
        long long am=1;
        mp1[a[0]]=1;
        mp2[b[0]]=1;
        for (long long i = 1; i < n; i++)
        {
            if (a[i - 1] == a[i])
            {
                cont += 1;
                mp1[a[i]]=max(mp1[a[i]],cont);
            }
            else
            {
                cont = 1;
                mp1[a[i]]=max(mp1[a[i]],cont);
            }
        }
        cont = 1;
        for (long long i = 1; i < n; i++)
        {
            if (b[i - 1] == b[i])
            {
                cont += 1;
                mp2[b[i]]=max(mp2[b[i]],cont);
            }
            else
            {
                cont = 1;
                mp2[b[i]]=max(mp2[b[i]],cont);
            }
        }

        for(auto it=mp1.begin();it!=mp1.end();it++){
            // cout<<(*it).second<<endl;
            curr=max(curr,(*it).second+mp2[(*it).first]);
        }
        for(auto it=mp2.begin();it!=mp2.end();it++){
             curr=max(curr,(*it).second+mp1[(*it).first]);

        }
        cout << curr <<endl;
    }
}