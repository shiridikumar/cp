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
        long long mi = LONG_LONG_MAX;
        long long ma = -1;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            ma = max(a[i], ma);
            mi = min(a[i], mi);
        }
        long long diff = ma - mi;
        if (diff == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            long long ans = log2(diff) / 1 + 1;
            cout<<ans<<endl;
            if(ans<=n){
                for(int i=0;i<ans;i++){
                    cout<<mi<<endl;
                }
            }
        }
    }
}