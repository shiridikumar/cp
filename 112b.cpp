#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int w,h;
        cin>>w>>h;
        int x1,x2,y1,y2;
        int w1,h1;
        cin>>x1>>y1>>x2>>y2;
        cin>>w1>>h1;
        // int v=max(y1,h-y2);
        // int h=max(x1,w-x2);
        int ans=INT_MAX;
        if(h-y2>y1){
            int k=h-y2;
            int rem=h1-k;
            if(rem<0){
                ans=0;
            }
            else if(y1>=rem){
                ans=rem;
            }
        }
        else{
            int k=y1;
            int rem=h1-k;
            if(rem<0){
                ans=0;
            }
            else if(h-y2>=rem){
                ans=rem;
            }
        }
        int ans1=INT_MAX;
        if(w-x2>x1){
            int k1=w-x2;
            if(k1>w1){
                ans1=0;
            }
            else if(x1>=w1-k1){
                ans1=w1-k1;
            }
        }
        else{
            int k1=x1;
            if(k1>w1){
                ans1=0;
            }
            else if(w-x2>=w1-k1){
                ans1=w1-k1;
            }
        }
        // if(ans==INT_MAX){
        //     ans=-1;
        // }
        // if(ans1==INT)
        ans=min(ans1,ans);
        if(ans==INT_MAX){
            ans=-1;
        }
        

        cout<<ans<<endl;


    }
}