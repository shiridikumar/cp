#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int b[m][n];
    vector<int> rowflags(m, 1);
    vector<int> columnflags(n, 1);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
            rowflags[i] = rowflags[i] && b[i][j];
            columnflags[j] = columnflags[j] && b[i][j];
        }
    }
    int flag = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == 1)
            {
                if (!(rowflags[i] || columnflags[j]))
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    vector<int> rowdup(m, 0);
    vector<int> columndup(n, 0);

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int c = 0;
        for (int i = 0; i < m; i++)
        {
            c += rowflags[i];
        }
        int r = 0;
        for (int i = 0; i < n; i++)
        {
            r += columnflags[i];
        }
        if (((r == 0 && c != 0) || (c == 0 && r != 0) ))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (!(columnflags[j]) || !(rowflags[i]))
                    {
                        cout<<0<<" ";
                    }
                    else{
                        cout<<1<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
}