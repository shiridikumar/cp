#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n, q;
        cin >> n >> q;
        vector<int > a(n,0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b;
        map<int, int> c;
        int k=n-1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > q)
            {
                k=i;
            }
        }
        int temp=0;
        for(int i=n-1;i>k;i--){
            if(a[i]>temp){
                temp+=1;
                c[i]=-1;
                // cout<<a[i]<<" "<<temp<<endl;
            }
            if(temp>=q){
                break;
            }
        }
        if(temp<q){
            for(int i=k;i>=0;i--){
                if(a[i]>temp){
                    // cout<<temp<<a[i]<<endl;
                    c[i]=-1;
                    temp+=1;
                }
                if(temp>=q){
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<=q && q>0){
                cout<<1;
            }
            else{
                if(c[i]==-1){
                    cout<<1;
                    q--;
                }
                else{
                    cout<<0;
                }
            }

        }
        cout<<endl;
    }
}