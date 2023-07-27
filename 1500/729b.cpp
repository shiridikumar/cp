#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long log_a_to_base_b(long long a, long long b)
{
    return log2(a) / log2(b);
}

int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        long long flag = 0;
        if (a == 1)
        {
            if ((n - 1) % b == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            long long bits = log_a_to_base_b(n, a);
            // cout<<bits<<endl;
            for (long long i = 0; i <= bits+1; i++)
            {

                long long temp = pow(a, i);
                if ((n - temp) % b == 0 && n>=temp)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}