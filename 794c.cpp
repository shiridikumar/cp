#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long t = 0; t < test; t++)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int flag=0;
        for(int i=0;i<(n/2+n%2-1);i++){
            if(a[i+1]==a[i+n/2]){
                flag=1;

                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0){
            if(1==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                
                for (long long i = 0; i < n / 2; i++)
                {
                    if(i==0 && n%2!=0){
                        cout << a[i] << " " << a[n-1] << " ";
                    }
                    else if(i==n/2-1 && n%2!=0 ){
                         cout << a[i] << " " << a[n/2] << " ";
                    }
                    else{
                         cout << a[i] << " " << a[i+n/2] << " ";
                    }

                }
                if (n % 2 != 0) 
                {
                    cout << a[n - 1] << endl;
                }
                else
                {
                    cout << endl;
                }

            }
        }


        // if (a[n / 2] > a[1] && a[(n/2)+1])
        // {

        //     if (n % 2 != 0 && a[n - 2] == a[n - 1])
        //     {
        //         cout << "NO" << endl;
        //     }
        //     else
        //     {
        //         cout << "YES" << endl;
        //         for (long long i = 0; i < n / 2; i++)
        //         {
        //             cout << a[i] << " " << a[i + n / 2+1] << " ";
        //         }
        //         if (n % 2 != 0)
        //         {
        //             cout << a[n - 1] << endl;
        //         }
        //         else
        //         {
        //             cout << endl;
        //         }
        //     }
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}



// 1 1 1 2 | 2 2 3 4
// 1 2 1 2 1 3 2 4

// 1 2 3 4 5

// 1 3 2 3
// 1 2 2 3 3 
// 1 3 2 
// 1 2 3 3
// 1 5 2 4 5
// 1 4 2 5 5
