#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        int a[n];
        vector<int> vis(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            vis[a[i]]=1;
        }

        int num=n+1;
        k=k%(num);
        // cout<<k<<endl;
        queue<int> q;

        for(int i=n-1;i>=0;i--){
            q.push(a[i]);
        }
        int rem=0;
        for(int i=0;i<=n;i++){
            if(vis[i]!=1){
                rem=i;
                break;
            }
        }
        while(k>0){
            q.push(rem);
            rem=q.front();
            q.pop();
            k--;
        }
        vector<int> final;

        while(!(q.empty())){
            // cout<<q.front()<<" ";
            final.push_back(q.front());
            q.pop();
        }
        for(int i=final.size()-1;i>=0;i--){
            cout<<final[i]<<" ";
        }
        
        cout<<endl;




    }
}