#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        string a;
        cin>>n;
        cin>>a;
        vector<int> prefix(n,0);
        vector<int> prefix1(n,0);
        // int a[n];
        // for(int i=0;i<n;i++){
        //     cin>>a[i];
        // }
        if(a[0]=='D'){
            prefix[0]=1;
        }
        else{
            prefix1[0]=1;
        }
        for(int i=1;i<n;i++){
            prefix1[i]=prefix1[i-1];
            prefix[i]=prefix[i-1];
            if(a[i]=='D')
            {
                prefix[i]+=1;
            }
            else{
                prefix1[i]+=1;
            }
        }

        // for(int i=0;i<n;i++){
        //     cout<<prefix[i]<<" ";
        // }
        // cout<<endl;
        vector<int> fin(n,1);
        int flag=0;
        int prev=0;
        int prevk=0;
        map<double,int> mp;
        for(int i=0;i<n;i++){
            mp[(double)(prefix[i]*1.0)/(double)(prefix1[i]*1.0)]+=1;
            cout<<mp[(double)(prefix[i]*1.0)/(double)(prefix1[i]*1.0)]<<" ";
        }
        cout<<endl;



        // cout<<endl;


    }
}