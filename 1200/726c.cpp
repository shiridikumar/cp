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
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long ind, mi = LONG_LONG_MAX;
        for (long long i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] < mi)
            {
                mi = a[i + 1] - a[i];
                ind = i;
            }
        }
        vector<long long> vec;
        for (long long i = 0; i < n; i++)
        {
            if (i != ind && i != ind + 1)
            {
                vec.push_back(a[i]);
            }
        }
        cout << a[ind] << " ";
        for(int i=ind+2;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<ind;i++){
            cout<<a[i]<<" ";
        }
        cout << a[ind + 1] << endl;
    }
}