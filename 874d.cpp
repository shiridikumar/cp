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
        long long ma = LONG_LONG_MIN;
        long long ind = 0;
        long long ind2 = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > ma)
            {
                ma = a[i];
                ind = i;
            }
        }
        long long ma1 = LONG_LONG_MIN;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] > ma1 && i != ind)
            {
                ind2 = i;
                ma1 = a[i];
            }
        }
        if (ind == 0)
        {
            ind = ind2;
        }
        vector<long long> res;
        vector<long long> res1;

        if (ind == n - 1)
        {
            res.push_back(a[n - 1]);
            if (n > 1)
            {
                if (a[n - 2] > a[0])
                {
                    for (long long i = n - 2; i >= 0; i--)
                    {
                        res.push_back(a[i]);
                    }
                    // cout << endl;
                }
                else
                {
                    for (long long i = 0; i < n - 1; i++)
                    {
                        res.push_back(a[i]);
                    }
                    // cout << endl;
                }
            }
        }
        // else
        // {
        long long bt = ind - 2;
        while (bt > 0)
        {
            if (a[bt] < a[0])
            {
                break;
            }
            bt--;
        }
        for (long long i = ind; i < n; i++)
        {
            // cout << a[i] << " ";
            res1.push_back(a[i]);
        }
        if (ind - 1 >= 0)
        {
            // cout << a[ind - 1] << " ";
            res1.push_back(a[ind - 1]);
        }

        for (long long i = ind - 2; i > bt; i--)
        {
            // cout << a[i] << " ";
            res1.push_back(a[i]);
        }
        for (long long i = 0; i <= bt; i++)
        {
            // cout << a[i] << " ";
            res1.push_back(a[i]);
        }
        long long flag=0;
        for(long long i=0;i<res.size();i++){
            if(res[i]!=res1[i]){
                if(res[i]>res1[i]){
                    flag=1;
                }
                break;
            }
        }
        if(flag==1){
            for(long long i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(long long i=0;i<res1.size();i++){
                cout<<res1[i]<<" ";
            }
            cout<<endl;

        }
        // cout << endl;
    }
    // }
}