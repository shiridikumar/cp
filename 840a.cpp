#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isKthBitSet(long long n, long long k)
{
    long long i = 1;
    if (n & (i << k))
        return true;
    else
        return false;
}

int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ma=INT_MIN;
        int start=0;
        int st=a[start];
        int mi=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (i == start)
            {

                continue;
            }
            int mask = (1 << ((int)log2(a[start]) + 1)) - 1;
            int temp = ((a[start] | a[i])) ^ a[start];
            a[start]+=temp;
            a[i]-=temp;
        }
        ma=a[start];

        start=1;

        for (int i = 1; i < n; i++)
        {
            if (i == start)
            {
                continue;
            }
            // int mask = (1 << ((int)log2(a[start]) + 1)) - 1;
            int temp = ((a[start] | a[i])) ^ a[i];
            a[start]-=temp;
            a[i]+=temp;
        }

        mi=a[start];



        cout<<ma-mi<<endl;
    }
}