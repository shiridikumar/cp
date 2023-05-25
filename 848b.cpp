#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<long long> primeFactors(long long n)
{
    vector<long long> vec;
    while (n % 2 == 0)
    {
        vec.push_back(2);
        n = n / 2;
    }
    for (long long i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            vec.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        vec.push_back(n);

    return vec;
}

int main()
{

    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        cin >> n;
        vector<long long> p = primeFactors(n);
        sort(p.begin(), p.end());
        map<long long, long long> mp;
        long long su = 0;
        for (long long i = 0; i < p.size(); i++)
        {
            mp[p[i]] += 1;
            // cout << p[i] << endl;
        }
        long long lp = p.size() - 1;
        long long rp = p.size() - 2;
        vector<long long> vis(p.size() + 1, 0);
        long long curr = LONG_LONG_MIN;
        map<long long, long long> mp1;
        map<long long, long long> mp2;
        long long num = 0;
        long long k = 1;
        long long ans=0;
        // for(auto it : mp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        while (num <p.size())
        {
            k=1;
            // cout<<num<<"_______________"<<endl;
            for (auto it : mp)
            {
                // cout<<it.first<<" "<<it.second<<"-------"<<endl;
                if (it.second > 0)
                {
                    mp[it.first]-=1;
                    k *= it.first;
                    // it.second -= 1;
                    num++;
                }
            }
            ans+=k;
        }
        cout<<ans<<endl;
    }
}