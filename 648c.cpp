#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    int b[n+1];
    vector<int> a1(n + 1, 0);
    vector<int> b1(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
        a[a1[i]]=i+1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b1[i];
        b[b1[i]]=i+1;

    }
    // for(int i=0;)
    // vector<int> num(n+1,0);
    map<int, int> num1;
    map<int, int> num2;

    for (int i = 1; i <= n; i++)
    {
        if(a[i]<b[i]){
            num1[a[i]+n-b[i]]+=1;
        }
        else{
            num1[a[i]-b[i]]+=1;
        }
        if(a[i]<b[i]){
            num2[n-a[i]+b[i]]+=1;
        }
        else{
            num2[a[i]-b[i]]+=1;
        }
    }

    int ma = INT_MIN;
    for (auto &it : num1)
    {
        ma = max(ma, it.second);
        // cout << it.first << " " << it.second << endl;
    }
    for(auto &it:num2){
        ma=max(ma,it.second);
    }
    cout << ma << endl;
}
