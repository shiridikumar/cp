#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,w;
        cin>>n>>w;
        int a[n];
        multiset<int > se;
        for(int i=0;i<n;i++){
            cin>>a[i];
            se.insert(a[i]);

        }
        int s=0;
        int count=1;
        int num=0;
        // for(auto &it:se){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        while(num<n){
            auto it=se.upper_bound(w-s);
           
            if(it==se.end()){
                it--;
            }
            while(*it>w-s){
                if(it==se.begin()){
                    break;
                }
                it--;
            }
            // cout<<*it<<" , "<<w-s<<" "<<num<<endl;
            if(*it<=w-s){
                s+=*it;
                se.erase(it);
                num+=1;
            }
            else{
                s=0;
                count+=1;
            }
        }
        cout<<count<<endl;
 
 
    }
}