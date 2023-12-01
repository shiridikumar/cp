#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    vector<int> scores = {1, 2, 3, 4, 5};
    for (int tes = 0; tes < test; tes++)
    {
        vector<string> vec(10, "");
        for (int i = 0; i < 10; i++)
        {
            cin >> vec[i];
        }
        int sc = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (vec[i][j] == 'X')
                {
                    int x = i;
                    int y = j;
                    if (i >= 5)
                    {
                        x = 9 - i;
                    }
                    if (j >= 5)
                    {
                        y = 9 - j;
                    }
                    int ring = scores[min(x, y)];
                    sc += ring;
                }
            }
        }
        cout << sc << endl;
    }
}