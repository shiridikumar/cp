#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int k;
        map<int,int> vals;
        vector< vector<int> > a;
 
        for(int i=0;i<n;i++){
            cin>>k;
            vector<int> row(k,0);
            int temp;
            for(int j=0;j<k;j++){
                cin>>temp;
                row[j]=temp;
                vals[temp]+=1;
            }
            a.push_back(row);
        }
        int fin=0;
        for(int i=0;i<a.size();i++){
            int flag=0;
            // cout<<"*******"<<i<<endl;
            for(int j=0;j<a[i].size();j++){
                if(vals[a[i][j]]==1){
                    // cout<<a[i][j]<<" not satisfying"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                fin=1;
                break;
            }
        }
        if(fin==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
 
 
 
 
    }
}