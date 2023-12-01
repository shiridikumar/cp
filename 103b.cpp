#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> prefix(n, 0);
        prefix[0] = a[0];
        vector<long long> vec;
        for (long long i = 1; i < n; i++)
        {

            if ((a[i] * 100) > k * (prefix[i - 1]))
            {
                long long diff = ceil(((a[i] * 100 - prefix[i - 1] * k) * 1.0) / (k * 1.0));
                if ((diff + prefix[i - 1]) * k == a[i] * 100)
                {
                    vec.push_back(diff);
                }
                else if ((diff + prefix[i - 1]) * k < a[i] * 100)
                {
                    vec.push_back(diff + 1);
                }
                else
                {
                    if((diff-1 + prefix[i - 1]) * k == a[i] * 100){
                        vec.push_back(diff-1);
                    }
                    else{
                        vec.push_back(diff);
                    }
                }
                // cout<<(diff+prefix[i-1])*k<<a[i]*100<<endl;
            }
            prefix[i] = a[i] + prefix[i - 1];
        }

        if (vec.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(vec.begin(), vec.end());
            vector<double> suffix(vec.size(), 0);
            suffix[vec.size() - 1] = vec[vec.size() - 1];
            for (long long i = vec.size() - 2; i >= 0; i--)
            {
                suffix[i] = vec[i]+suffix[i+1];
            }


            long long temp = 0;
            long long curr = LONG_LONG_MAX;
            for (long long i = 0; i < vec.size(); i++)
            {
                temp = suffix[i] - (vec.size() - i) * vec[i];
                // cout<<vec[i]<<" "<<suffix[i]<<endl;
                curr = min(curr, vec[i] + temp);
            }

            cout << curr << endl;
        }
    }
}