#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007;
using namespace std;

int getllog(long long num, long long base,vector<vector<long long > >&vec)
{
    int ind = 0;
    while (vec[base][ind] <= num && vec[base][ind]>0)
    {
        ind += 1;
    }
    return ind - 1;
}

long long power(long long y, long long m)
{
    long long orig = y;
    long long st = 1;
    while (m > 0)
    {
        st = st * orig;
        m -= 1;
    }
    return st;
}
long long compute_prefix(long long n, vector<vector<long long>> &vec)
{
    long long start = 4;
    long long end = n;
    long long one = 1;
    long long ma = getllog(n,2,vec);
    vector<long long> changing_points;
    long long ind = getllog(start,2,vec);
    while (ind < ma)
    {
        changing_points.push_back(ind);
        ind += 1;
    }
    long long s = 0;

    for (long long i = 0; i < changing_points.size(); i++)
    {
        long long temp = getllog(vec[2][changing_points[i]], changing_points[i],vec);
        long long next = vec[changing_points[i]][temp + 1];
        if (next >= vec[2][changing_points[i] + 1])
        {
            s += (vec[2][changing_points[i]] * temp);
            s = s % mod;
        }
        else
        {
            s += (next - vec[2][changing_points[i]]) * temp;
            s += (vec[2][changing_points[i] + 1] - next) * (temp + 1);
            s = s % mod;
        }
    }
    s = s % mod;
    long long last = vec[2][ind];
    // cout<<"--------------------"<<endl;
    long long temp2 = getllog(last, ind,vec);
    long long next2 = power(ind, temp2 + 1);


    if (next2 > n || ind > 58)
    {
        s += (n + 1 - last) * temp2;
    }
    else
    {
        s += (next2 - last) * temp2;
        s += (n - next2 + 1) * (temp2 + 1);
    }
    s = s % mod;
    return s;
}
int main()
{
    vector<long long> row(63, -1);
    vector<vector<long long>> vec(63, row);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long q;
    cin >> q;
    long long l, r;

    for (long long i = 2; i < 63; i++)
    {
        long long curr = 1;
        for (long long j = 0; j < 63; j++)
        {
            if(j==0){
                vec[i][j]=1;
                continue;
            }
            curr = i * curr;
            if(curr> (long long)1e18){
                break;
            }
            vec[i][j] = curr;
        }
    }

    for (long long i = 0; i < q; i++)
    {
        cin >> l >> r;
        long long ans = (compute_prefix(r, vec) - compute_prefix(l - 1, vec)) + (long long)(1e9 + 7);    
        cout << ans % (long long)(1e9 + 7) << "\n";

    }
}