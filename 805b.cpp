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
        int w=0,b=1;
        for (int i = 0; i < n/2; i++)
        {
            if(i%2==0){
                w=0;
                b=1;
            }
            else{
                b=0;w=1;
            }
            for (int j = 0; j < m/2; j ++)
            {
                if(j%2==0){

                    cout<<b<<" "<<w<<" ";
                }
                else{
                    cout<<w<<" "<<b<<" ";
                }

            }
            cout<<endl;
            for (int j = 0; j < m/2; j ++)
            {
                if(j%2==0){
                 cout<<w<<" "<<b<<" ";
                }
                else{
                    cout<<b<<" "<<w<<" ";
                }
            }
            cout<<endl;

            
        }
    }
}