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
        for (long long i = 0; i < n; i++)
        {
            long long flag = 0;
            for (long long j = 0; j < n; j++)
            {
                if(i==j){
                    continue;
                }
                for(long long k=0;k<n;k++){
                    flag=0;
                    if(a[k]==a[i] || a[j]==a[k]){
                        continue;
                    }
                    if(a[k]<0){
                        flag=2;
                        break;
                    }
                    if(a[i]!=0){
                        if(abs(a[k]-a[j])%a[i]!=0 || (a[j]-a[k])/a[i]<0 || (a[j]-a[k])/a[i]>n-2){
                            flag=1;
                        }
                    }
                    else{
                        if(a[k]-a[j]!=0){
                            flag=1;
                        }
                    }
                    if(a[j]!=0){
                        if(abs(a[k]-a[i])%a[j]!=0 || (a[i]-a[k])/a[j]<0 || (a[i]-a[k])/a[j]>n-2){
                            flag+=1;
                        }
                    }
                    else{
                        if(a[k]-a[i]!=0){
                            flag+=1;

                        }
                    }
                    if(flag==2){
                        break;
                    }
                }
                if(flag!=2){
                    cout<<a[i]<<"   "<<a[j]<<endl;
                    break;
                }
            }
            if(flag!=2){
                break;
            }
        }
    }
}