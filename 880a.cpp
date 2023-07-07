#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        // int a[n];
        int temp;
        vector<int> mp(101,0);
        for(int i=0;i<n;i++){
            cin>>temp;
            mp[temp]+=1;
        }
        int prev=INT_MAX;
        int flag=0;
        for(int i=0;i<=100;i++){
            if(i==0){
                continue;
            }
            if(mp[i]!=0){
                if(mp[i]>mp[i-1]){
                    // cout<<i<<"---  "<<prev<<" --- "<<mp[i]<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }


    }
}
