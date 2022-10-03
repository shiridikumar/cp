#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;

        cin >> k;
        int b[k];
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        int lp = 0;
        int rp = 0;
        int stuck = 0;
        int flag = 0;
        while (true && lp < n && rp < k)
        {
            if (a[lp] < b[rp])
            {
                int temp=0;
                while (a[lp] < b[rp])
                {

                    if (lp < n - m + 1)
                    {
                        a[lp]=a[lp]*m;
                        // lp += m;
                        cout << lp << ".............." << endl;
                        temp++;
                        if(a[lp]==b[rp]){
                            lp+=temp*m-1;
                            break;
                        }
                    }
                    else
                    {
                        cout << lp << "*** " << rp << endl;
                        flag = 1;
                        break;
                    }
                   
                   
                }
                 if(flag==1){break;}
                //  cout<<lp<<endl;
                //  lp--;
            }
        if (a[lp] > b[rp])
        {
            int temp=0;
            while(b[rp]<a[lp]){
                b[rp]=b[rp]*m;
                temp+=1;
                cout<<rp<<"        "<<lp<<endl;
                cout<<b[rp]<<" ////  "<<a[lp]<<endl;
                if(b[rp]==a[lp])
                {
                    a[lp] = b[rp];
                    stuck = temp*m;
                    flag=2;
                    break;
                }
                
            }
            if(flag!=2){
                flag=1;
                cout<<"dasdas"<<endl;
                break;
            }
        }
        rp++;
        if (stuck == 0)
        {
            lp++;
        }
        if (stuck > 0)
        {
            stuck--;
        }
    }
    if (flag == 1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Asda" << endl;
        cout << lp << " " << rp << endl;
        if (lp == n && rp == k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
}