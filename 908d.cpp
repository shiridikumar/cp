#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        vector<int> prefix(n, 0);

        int ma = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ma = max(ma, a[i]);
        }
        prefix[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            prefix[i] = max(prefix[i + 1], a[i]);
        }
        vector<int> fin;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        
        }
        sort(b, b + m, greater<int>());
        int ind = 0;

        while (ind < m && b[ind] >= ma)
        {
            fin.push_back(b[ind]);
            ind++;
        }
        

        for (int i = 0; i < n; i++)
        {
            while (ind < m && b[ind] >= prefix[i])
            {
                fin.push_back(b[ind]);
                ind++;
            }
            fin.push_back(a[i]);
        }



        while (ind < m)
        {
            fin.push_back(b[ind]);
            ind++;
        }

        for (int i = 0; i < fin.size(); i++)
        {
            cout << fin[i] << " ";
        }
        cout << endl;
    }
}