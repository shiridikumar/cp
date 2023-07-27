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
        if (k > 515)
        {
            cout << 0 << endl;
        }
        else if (k<=3){
            cout<<(n/2+1)<<endl;
        }
        else
        {
            long long nextnum;
            long long flag = 0;
            long long count = 0;
            for (long long i = n / 2; i < n; i++)
            {
                long long prevb = i;
                long long preva = n;
                flag = 0;

                for (long long j = k - 3; j >= 0; j--)
                {
                    nextnum = preva - prevb;
                    preva = prevb;
                    prevb = nextnum;
                    // cout<<i<<"***************"<<nextnum<<endl;
                    if (preva < prevb)
                    {
                        // cout<<prevb<<" ,"<<preva<<"  ***"<<i<<endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    // cout<<nextnum<<"  ,,, "<<i<<endl;
                    count += 1;
                }
            }
            cout << count << endl;
        }
    }
}