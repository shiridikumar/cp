#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int n, m;
    for (int t = 0; t < test; t++)
    {
        cin >> n >> m;
        int a[n][m];
        vector<int> diag(n+m-1,0);
        vector<int> diag1(n+m-1,0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                diag[j-i+n-1]+=a[i][j];
                diag1[i+j]+=a[i][j];
            }
        }
        int ma=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(diag[j-i+n-1]+diag1[i+j]-a[i][j]>ma){
                    ma=diag[j-i+n-1]+diag1[i+j]-a[i][j];
                }

            }
        }
        cout<<ma<<endl;
    }
}