#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n, k;
        cin >> n >> k;
        long long showels;
        if (k >= n)
        {
            cout << 1 << endl;
        }
        else
        {
            long long mi=LONG_LONG_MAX;
            for (long long i = min(k, (long long)sqrt(n) + 1); i >= 1; i--)
            {
                if (n % i == 0)
                {
                    showels = n / i;
                    long long other=n/showels;
                    mi=min(mi,showels);
                    if(showels<=k){
                        // showels=other;
                        mi=min(mi,other);
                    }
                    // break;
                }
            }

            cout  << mi << endl;
        }
    }
}