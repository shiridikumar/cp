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
        long long flag = 0;
        int prev=0;
        int nt=0;
        vector<int> arr;
        if (n >= 2)
        {
            for(int i=1;i<n;i++){
                if(a[i]!=a[i-1]){
                    nt=1;
                   
                    if(prev==0){
                        flag=1;
                        break;
                    }
                    else{
                        arr.push_back(i);                        
                        // cout<<i<<" ";
                        for(int j=i-prev;j<i;j++){
                            arr.push_back(j);
                        }
                    }
                    prev=0;
                }
                else{
                    prev+=1;
                }
            }
        }
        else
        {
            flag=1;
        }
        if(flag==1 || prev==0){
            cout<<-1;
        }
        else{
            for(auto it=arr.begin();it!=arr.end();it++){
                cout<<(*it)<<" ";
            }
            if(nt==0){
                cout<<n<<" ";
                for(int i=1;i<n;i++){
                    cout<<i<<" ";
                }
            }
            else{
                cout<<n<<" ";
                for(int i=n-prev;i<n;i++){
                    cout<<(i)<<" ";
                }
            }
        }
        arr.clear();
       
        cout<<endl;
    }
}