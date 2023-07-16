#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    vector<long long> vec;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            vec.push_back(i);
        }
    }
    long long num = 1;
    if (vec.size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        long long init = vec[0];
        for (long long i = 1; i < vec.size(); i++)
        {
            num *= (vec[i] - init);
            init = vec[i];
        }
        cout << num << endl;
    }
}