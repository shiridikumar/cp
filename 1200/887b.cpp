#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long strength=a[0];
        for(long long i=1;i<n;i++){
            strength=strength&a[i];
        }
        if(strength!=0){
            cout<<1<<endl;
        }
        else{
            long long temp=a[0];
            long long count=0;
            for(long long i=1;i<n;i++){
                if(temp==0){
                    count+=1;
                    temp=a[i];
                }
                else{
                    temp=temp&a[i];
                }
            }
            if(temp==0){
                count+=1;
            }
            cout<<count<<endl;
        }



    }
}