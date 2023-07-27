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
            b[i]=a[i];
            // mp[a[i]].push_back(i);
        }

        vector<long long> pref(n, 0);

        sort(a,a+n);

        pref[0] = a[0];
        for (long long i = 1; i < n; i++)
        {
            pref[i] = a[i] + pref[i - 1];
        }
        long long flag = 0;
        map<long long,bool > mp;
        vector<long long> prob(n, 0);
        long long c=1;
        prob[n-1]=1;
        mp[a[n-1]]=true;

        if (n >= 2)
        {
            if (pref[n - 2] >= a[n - 1])
            {
                prob[n - 2] = 1;
                mp[a[n-2]]=true;
                c+=1;
            }
            else{
                mp[a[n-2]]=false;
            }
            for(long long i=n-3;i>=0;i--){
                if(pref[i]>=a[i+1] && prob[i+1]==1){
                    prob[i]=1;
                    mp[a[i]]=true;
                    c+=1;
                }
                else{
                    mp[a[i]]=false;
                }
            }
            cout<<c<<endl;
            for(long long i=0;i<n;i++){
                if(mp[b[i]]){
                    cout<<i+1<<" ";
                }
                else{
                    mp[b[i]]=false;
                }
            }
            cout<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<1<<endl;
        }
    }
}