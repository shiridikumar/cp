#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a[n];
        map<int,int> vis;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            // if(a[i]<=n){
            //     vis[a[i]]=1;
            // }
        }
        sort(a,a+n);
        long long ind=0;
        vector<int> vec;
        for(long long i=0;i<n;i++){
            if(a[i]>n || vis[a[i]]==1){
                vec.push_back(a[i]);
            }
            else{
                vis[a[i]]=1;
                // cout<<vis[a[i]]<<" "<<a[i]<<endl;
            }

        }
        long long flag=0;
        long long count=0;
        for(long long i=1;i<=n;i++){
            // cout<<ind<<"***"<<" "<<i<<endl; // if(a[i]<=n){
            //     vis[a[i]]=1;
            // }
            if(ind>=vec.size()){
                break;
            }
            if(vis[i]==0){
                if(2*i>=vec[ind]){
                    flag=1;
                    // cout<<i<<" "<<vec[ind]<<endl;
                    break;
                }
                else{
                    ind+=1;
                    count+=1;
                    vis[i]=1;
                }
            }
        }
        long long c=0;
        for(long long i=1;i<=n;i++){
            c+=vis[i];
        }
        if(flag==1 || c<n){
            cout<<-1<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
}