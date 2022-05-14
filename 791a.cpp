#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        long long n;
        cin >> n;
        if (n % 2 == 0 && n >= 4)
        {
            cout<<n/6+(n%6!=0)<<" "<<n/4<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}