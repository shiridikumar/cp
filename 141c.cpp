#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,m;
        cin>>n>>m;
        vector<int> a(n,0);
        int b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];

        }
        int prefix[n];
        sort(a.begin(),a.end());
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        int flag=0;
        int rank=-1;
        // for(int i=0;i<n;i++){
        //     cout<<prefix[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"inpu t takend"<<endl;
        for(int i=n-1;i>=0;i--){
            int k;
            int ans;
            //1st case
            if(i!=n-1){
                k=upper_bound(a.begin(),a.end(),b[i])-a.begin();
                // cout<<k<<"**"<<i<<endl;
                if(k-1<=i){
                    ans=prefix[i+1]-a[k-1];
                }
                else{
                    ans=prefix[i];
                }
                // cout<<ans<<endl;
                if(ans<=m){
                    flag=1;
                }
            }
            k=upper_bound(a.begin(),a.end(),b[i])-a.begin();
            // cout<<k<<"***"<<i<<endl;
            if(k-1<=i-2){
                ans=prefix[i-1];
            }
            else{
                if(i-2<0){
                    ans=b[i];
                }
                else{
                    ans=prefix[i-2]+b[i];
                }
            }
            // cout<<ans<<endl;
            if(ans<=m){
                flag=1;
            }
            if(flag==1){

                rank=n-(i);
                break;
            }

            


        }
        if(rank==-1){
            rank=n+1;
        }
        cout<<rank<<endl;





    }
}