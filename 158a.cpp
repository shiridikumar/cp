#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int ind = -1;
    for (int tes = 0; tes < test; tes++)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int diff=a[0];
        int ind=lower_bound(a,a+n,x)-a;
        for(int i=1;i<ind;i++){
            diff=max(diff,a[i]-a[i-1]);
        }
        diff=max(diff,2*(x-a[ind-1]));
        cout<<diff<<endl;


    }
}