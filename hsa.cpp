#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int x, y, n;
        cin >> x >> y >> n;
        stack<int> st;
        st.push(y);
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            int tp = st.top();
            st.push(tp - i);
            if (st.top() < x)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            while (!(st.empty()))
            {
                if (st.size() == n)
                {
                    cout << x << " ";
                }
                else
                {

                    cout << st.top() << " ";
                }
                st.pop();
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}