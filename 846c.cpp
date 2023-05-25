#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n, m;
        cin >> n >> m;
        long long temp=0;
        vector<long long> a(n+1, 0);
        vector<long long> c(m, 0);
        long long su = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >>temp;
            a[temp]+=1;
            su +=temp;
        }
        for (long long i = 0; i < m; i++)
        {
            cin >> c[i];
        }
        make_heap(a.begin(), a.end());
        make_heap(c.begin(), c.end());
        long long count = m;
        long long ans = 0;
        temp = 0;

        while (count > 0 && su >0)
        {
            // cout<<count<<" "<<ans<<endl;
            // count=0;
            if (a.front() > c.front())
            {

                ans += c.front();
                count-=1;
                temp = a.front() - c.front();
                su-=c.front();

                pop_heap(c.begin(), c.end());
                c.pop_back();
                pop_heap(a.begin(), a.end());
                a.pop_back();
                a.push_back(temp);
                push_heap(a.begin(), a.end());
            }
            else
            {
                count-=1;
                temp=a.front();
                ans +=temp;
                su-=temp;
                pop_heap(c.begin(), c.end());
                c.pop_back();
                pop_heap(a.begin(), a.end());
                a.pop_back();
            }
        }
        cout<<ans<<endl;
    }
}