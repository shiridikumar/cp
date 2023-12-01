#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        vector<int> vis(n+1,0);
        int i=n;
        for(int i=n;i>=1;i--){
            if(vis[i]==1){
                continue;
            }
            else{
                int ind=i;
                cout<<ind<<" ";
                vis[ind]=1;
                while(ind>=2 && ind%2==0){
                    ind=ind/2;
                    cout<<ind<<" ";
                    vis[ind]=1;
                }
            }
        }
        cout<<endl;
    }

}