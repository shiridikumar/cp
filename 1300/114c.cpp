#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long n;
    cin >> n;
    vector<long long> a(n, 0);
    long long s = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    long long m;
    cin >> m;
    sort(a.begin(), a.end());
    long long x, y;
    // cout<<"****"<<s<<"***"<<endl;
    // vector<int> index(1e12+1,n);
    // int p=0;
    // for(int i=1;i<=1e12;i++){
    //     if(a[p]>=i){
    //         index[i]=p;
    //     }
    //     else{
    //         while(p<n && a[p]<i){
    //             p+=1;
    //         }
    //         index[i]=p;
    //     }
    //     if(p>=n){
    //         break;
    //     }
    // }
    for (long long i = 0; i < m; i++)
    {
        cin >> x >> y;
        long long ind = lower_bound(a.begin(), a.end(), x) - a.begin();
        if (ind !=n && (a[ind] == x || ind == 0))
        {
            // cout<<"###"<<endl;
            cout << max((long long)0,y-(s-a[ind])) << endl;
        }
        else
        {
            if (ind == n)
            {
                // cout<<"---"<<endl;
                ind = n - 1;
                cout << x-a[ind]+max((long long)0,y-(s-a[ind]))<< endl;
            }
            else
            {
                // cout<<"***"<<endl;
                long long temp = 0;
                temp =max((long long)0,y-(s-a[ind]));
                ind = ind - 1;
                temp = min(temp, x-a[ind]+max((long long)0,y-(s-a[ind])));
                cout<<temp<<endl;
            }
        }
    }
}