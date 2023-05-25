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
        vector<int> ind(n + 1, 0);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            ind[a[i]] = i + 1;
        }
        int l = (n + 1) / 2;
        int r = l + 1;
        int flag = 0;
        int co = n / 2;
        // cout<<l<<r<<endl;
        if (n % 2 == 0)
        {
            if (ind[r] < ind[l])
            {
                cout << n / 2 << endl;
                flag = 1;
            }
            else
            {
                co -= 1;
            }
        }
        if(n%2!=0){
            l=(n+1)/2;r=(n+1)/2;
        }
        if (flag != 1)
        {
            while (l > 1 && r < n)
            {
                // cout<<l<<" ---  "<<r<<"  "<<tes+1<<endl;
                if (ind[l] < ind[l - 1] || ind[r] > ind[r + 1])
                {
                    cout << co << endl;
                    flag=1;
                    break;
                }
                co-=1;
                l--;
                r++;
            }
        }
        if(flag!=1){
            cout<<0<<endl;

        }

    }
}