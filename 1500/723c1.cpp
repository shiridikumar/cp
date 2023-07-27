#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long count = 0;
    long long curr = 0;
    long long sum = 0;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (long long i = 0; i < n; i++)
    {
        if (sum + a[i] < 0)
        {
            if (!(pq.empty()) && pq.top()<=a[i])
            {
                sum-=pq.top();
                sum+=a[i];
                pq.pop();
                pq.push(a[i]);
            }
        }
        else
        {
            if (a[i] < 0)
            {
                pq.push(a[i]);
            }
            sum += a[i];
            count += 1;
        }
        curr = max(curr, count);
    }
    // if(n==2000){
    //     cout<<neg<<endl;
    // }
    cout << curr << endl;
}