#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
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
        vector<long long> prefix(n, 0);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long s = a[0];
        prefix[0] = s;
        for (long long j = 1; j < n; j++)
        {
            s = s ^ a[j];
            prefix[j] = s;
        }
        long long ans=0;

        for (long long i = 0; i <= sqrt(2 * n); i++)
        {
            long long ele=i*i;
            vector<long long> mp(2*n+1,0);
            long long pref = 0;
            for (long long j = 0; j < n; j++)
            {
                // cout<<(prefix[j]^ele)<<endl;
                if((prefix[j]^ele)<=2*n){
                    ans += mp[prefix[j] ^ ele];
                }
                if (prefix[j] == ele)
                {
                    ans++;
                }
                mp[prefix[j]]++;
            }

        }
        ans=(n*(n+1))/2-ans;
        cout<<ans<<endl;
        // cout << c << endl;
    }
}