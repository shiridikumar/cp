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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=2;
        }
        sort(a,a+n);
        int k=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            // cout<<(*it).first<<" "<<(*it).second<<endl;
            int ele=upper_bound(a,a+n,(*it).first)-a;
            int ele1=upper_bound(a,a+n,ele)-a;
            if(ele-1>=(*it).first && ele1==ele){
                k+=1;
            }
        }
        if(a[0]!=0){
            k+=1;
        }
        cout<<k<<endl;
    }
}


