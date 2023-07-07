#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n, g, k;
        cin >> n >> k >> g;
        long long ans = g * k;
        long long each = ceil((long double)(1.0 * g) / (1.0 * 2)) - 1;
        long long act = k * g;
        long long extra = k * g - each * (n - 1);
        if (extra <= 0)
        {
            ans = k * g;
            cout << ans << endl;
        }
        else
        {

            long long mod = extra % g;
            if (mod >= each + 1)
            {
                extra = extra + g - mod;
            }
            else
            {
                extra = extra - mod;
            }
            ans = g * k - extra;
            cout << ans << endl;
        }
        // }
    }
}
