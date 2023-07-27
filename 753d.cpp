#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        int mp_blue=0;

        int  mp_red=0;
        cin >> s;
        int flag=0;
        vector<pair<int,char > > vec;
        for(int i=0;i<s.size();i++){
            vec.push_back(make_pair(a[i],s[i]));
        }
        sort(vec.begin(),vec.end());
        int ind=1;
        for(int i=0;i<n;i++){
            if(vec[i].second=='B'){
                if(vec[i].first<ind){
                    flag=1;
                    break;
                }
                else{
                    ind+=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(vec[i].second=='R'){
                if(vec[i].first>ind){
                    flag=1;
                    break;
                }
                else{
                    ind+=1;
                }
            }
        }
        // cout<<mp_red<<" "<<mir<<endl;
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}