#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {

        int n;
        cin >> n;
        int a[n];
        map<int, int> ele;
        map<int,int> vis;
        map< int,pair<int,int>> diff;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // ele[a[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                diff[a[i] - a[j]] =make_pair(a[i],a[j]);
                vis[a[i]-a[j]] = 1;
                
            }
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
          for(int j=0;j<n;j++){
              if(i!=j){
                  if(not(vis[a[i]+a[j]])){
                      flag=1;
                      
                      cout<<a[i]+a[j]<<"********"<<i<<j<<endl;
                      break;
                  }
                  else{
                      if(diff[a[i]+a[j]].second==i || diff[a[i]+a[j]].second==j)
                      {
                          cout<<a[i]+a[j]<<diff[a[i]+a[j]].second<<a[i]<<a[j]<<endl;
                          flag=1;
                          break;
                      }
                  }
              }

          }
          if(flag==1){
              break;
          }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}
