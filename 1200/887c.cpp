#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> pref(n,0);
        vector<int> suff(n,0);
        pref[0]=a[0];
        suff[n-1]=a[n-1];
        map<int,bool> mp;
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]^a[i];
            mp[pref[i]]=true;
        }
        int curr=-1;

        for(int i=255;i>=0;i--){
            for(int j=0;j<n;j++){
                if(mp[i^pref[j]] || (i^pref[j])==0){
                    curr=i;
                    break;
                }

            }
            if(curr!=-1){
                break;
            }
        }
        cout<<curr<<endl;
       


    }
}