#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // map<int,int> colors;
        vector<int> suffix(n, 0);
        int curr = 0;
        suffix[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] == a[n - 1])
            {
                suffix[i] = suffix[i + 1] + 1;
            }
            else
            {
                suffix[i] = suffix[i + 1];
            }
            // suffix[i]=curr;
        }

        vector<int> prefix(n, 0);
        int flag = 0;
        // for(int i=0;i<n-1;i++){
        //     pref_colors[a[i]]+=1;
        //     if(a[i]==a[0] && pref_colors[a[i]]==k){
        //         if(suffix[i+1]>=k || a[i]==a[n-1]){
        //             flag=1;
        //             break;
        //         }
        //     }
        // }
        // cout<<a[n-1]<<" "<<a[0]<<endl;
        if (a[n - 1] == a[0])
        {
            // cout<<"**<<endl;
            if (suffix[0] >= k)
            {
                flag = 1;
            }
        }
        else
        {
            prefix[0] = 1;
            for (int i = 1; i < n; i++)
            {
                if (prefix[i - 1] >= k && suffix[i] >= k)
                {
                    flag = 1;
                    break;
                }
                if (a[i] == a[0])
                {
                    prefix[i] = prefix[i - 1] + 1;
                }
                else
                {
                    prefix[i] = prefix[i - 1];
                }
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}