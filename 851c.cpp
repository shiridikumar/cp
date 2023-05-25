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
        if (n % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> vis(2 * n + 1, 0);
            int start = (3 * (n + 1)) / 2;
            int ind = 0;
            cout << "YES" << endl;
            for (int i = 1; i < n+1; i+=2)
            {
                cout<<i<<" "<<start-i<<endl;
                start+=1;
            }
            for(int i=2;i<n+1;i+=2){
                cout<<i<<" "<<start-i<<endl;
                start+=1;
            }
        }
    }
}