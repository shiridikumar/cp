#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,m;
        cin>>n>>m;
        vector<char> a(n,0);
        int temp;
        string a1,b1;
        cin>>a1;
        cin>>b1;
        for(int i=0;i<n;i++){
            a[i]=a1[i];
        }
        vector<char> b(m,0);
        for(int i=0;i<m;i++){
            b[i]=b1[i];
        }
        for(int i=m-1;i>=0;i--){
            a.push_back(b[i]);
        }
        int k=1;
        int flag=0;
        // for(auto it: a){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        int count=0;
        for(int i=1;i<n+m;i++){
            if(a[i-1]==a[i]){
                k+=1;
            }
            else{
                k=1;
            }
            if(k==2){
                count+=1;
            }
            if(k>=3 || count==2){
                flag=1;
                break;
            }
        }

        if(flag!=1){

        }

        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


    }
}