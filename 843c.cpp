#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isKthBitSet(long long n, long long k)
{
    long long i=1;
    if (n & (i<<k))
        return true;
    else
        return false;
}

int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        long long x;
        cin >> n >> x;
        long long extra = (n | x) ^ x;
        long long pos = (n | x) ^ n;
        //  cout<<<<endl;
        if (pos != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            // cout<<extra<<endl;
            if (extra == 0)

            {
                cout << n << endl;
            }
            else
            {

                long long bits = (int)(log2(extra ))+1;
                long long total = (int)(log2(n))+1;
                // cout<<total<<"---"<<endl;
                long long mask = pow(2, bits) - 1;
                pos = (n & x) & mask;

                if (pos != 0)
                {
                    cout << -1 << endl;
                }
                else
                {

                    // cout<<total<<endl;
                    long long ind = -1;
                    // cout<<bits<<endl;
                    for (long long i = bits + 1; i <= total; i++)
                    {
                        // cout<<(n&(1<<i-1)))<<" "<<i<<endl;
                        if (!(isKthBitSet(n, i - 1)))
                        {
                            ind = i;
                            break;
                        }
                    }
                    // cout<<bits<<ind<<endl;
                    if (ind == -1)
                    {
                        if (x == 0)
                        {
                            // mask = pow(2, bits + 1) - 1;
                            // long long new_mask = ~mask;
                            long long shift=1;
                            
                            long long ans = shift<<total;
                            cout << ans<<endl;
                            // cout <<
                        }
                        else
                        {
                            cout << -1 << endl;
                        }
                    }
                    else
                    {
                        if (ind > bits + 1)
                        {
                            cout << -1 << endl;
                        }
                        else
                        {
                            long long shift=1;
                            mask = (shift<<ind) - 1;
                            long long new_mask = ~mask;
                            long long ans = (n & new_mask) + (shift<<(ind-1));
                            cout << ans << endl;
                        }
                    }
                }
            }
        }
    }
}
