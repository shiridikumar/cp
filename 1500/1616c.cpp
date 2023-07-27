#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ind = 1;
        int count = 0;
        int curr = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (i < j)
                {
                    count = 0;
                    double diff = (double)((a[i] - a[j]) * 1.0) / (double)(1.0 * (j - i));
                    // double start=a[i]+1.0*i*diff;
                    for (int el = 0; el < n; el++)
                    {
                        if(i==el){
                            continue;
                        }
                        if (i < el)
                        {
                            if ((double)((a[i] - a[el]) * 1.0) / (double)(1.0 * (el - i)) != diff)
                            {
                                // cout<<
                                count += 1;
                            }
                        }
                        else{
                             if ((double)((a[el] - a[i]) * 1.0) / (double)(1.0 * (i-el)) != diff)

                            {
                                // cout<<diff<<" "<<(double)((a[el] - a[i]) * 1.0) / (double)(1.0 * (i-el))<<endl;
                                count += 1;
                            }

                        }
                    }
                    curr = min(count, curr);
                }
            }
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << curr << endl;
        }
    }
}