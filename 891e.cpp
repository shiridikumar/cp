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
        map<long double,long long> mp;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]+=1;
        }
        long long q;
        cin >> q;
        long long x, y;
        for (long long i = 0; i < q; i++)
        {
            cin >> x >> y;
            long double a =1;
            long double b=-1*x;
            long double c=y;
            long double root1,root2;
            long double discriminant = b * b - 4 * a * c;

            if (discriminant > 0)
            {
                // cout<<"****"<<endl;

                root1 = (-b + std::sqrt(discriminant)) / (2 * a);
                root2 = (-b - std::sqrt(discriminant)) / (2 * a);
                if(mp.find(root1)!=mp.end()){
                    // cout<<root1<<" ,  "<<root2<<endl;
                    cout<<mp[root1]*mp[root2]<<" ";
                }
                else{
                    cout<<0<<" ";
                }

            }
            else if (discriminant == 0)
            {
                root1 = -b / (2 * a);
                // cout<<root1<<endl;
                if(mp.find(root1)!=mp.end()){
                    cout<<(mp[root1]*(mp[root1]-1))/2<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            else
            {
                cout<<0<<" ";
               
            }
        }
        cout<<endl;
    }
}