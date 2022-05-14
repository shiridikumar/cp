#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n, q;
    cin >> n >> q;
    long long a[n];
    long long sum = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    long long type;
    long long ind, x;
    vector<long long> upd(n, -1);
    vector<long long> upds(n, 0);
    long long all = -1;
    long long quer=0;
    for (long long i = 0; i < q; i++)
    {

        cin >> type;
        if (type == 1)
        {

            cin >> ind >> x;
            ind -= 1;
            if (upd[ind] != quer)
            {
                sum = sum + (x - a[ind]) + (all != -1) * (a[ind] - all);
                a[ind]=x;
                cout << sum << endl;
                upd[ind]=quer;
            }
            else{
                sum=sum+(x-a[ind]);
                a[ind]=x;
                cout<<sum<<endl;

            }
        }
        else
        {
            cin >> x;
            sum = n * x;
            all = x;
            quer=i;
            cout << sum << endl;
        }
    }
}