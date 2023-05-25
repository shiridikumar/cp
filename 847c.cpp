#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        vector<int>  row(n,0);
        vector<vector<int>  > ind(n,row);
        int temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>temp;
                ind[j][temp-1]++;
                row[temp-1]+=j+1;
            }
        }
        //   cout<<"----------------"<<endl;
        vector<int> vis;
        // 
        // cout<<"----------------"<<endl;
        int start=n-1;
        while(vis.size()<n){
            for(int i=0;i<n;i++){
                if(row[i]==start){
                    vis.push_back(i+1);
                    start+=n-2;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<vis[i]<<" ";
        }
        cout<<endl;
        


    }
}