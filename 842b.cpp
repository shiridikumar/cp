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
        vector<int> grps(ceil(1.0*n/k),0);
        for(int i=0;i<grps.size();i++){
            grps[i]=i*k+1;
        }
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            // cout<<grps[(a[i]-1)/k]<<" "<<a[i]<<endl;
            if(grps[(a[i]-1)/k]!=a[i] && grps[(a[i]-1)/k]!=-1){
                count+=1;
                grps[(a[i]-1)/k]=-1;
            }
            if(grps[(a[i]-1)/k]!=-1){
                grps[(a[i]-1)/k]+=1;
            }
        }

        vector<int> grp_ind;
        for(int i=0;i<n;i++){
            if(grps[(a[i]-1)/k]!=-1 && grps[(a[i]-1)/k]){
                grp_ind.push_back(((a[i]-1)/k)*k+1);
            }
        }
        for(int i=0;i<n;i++){
            if(grps[(a[i]-1)/k]==-1){
                grp_ind.push_back(((a[i]-1)/k)*k+1);
            }
        }
        int move=0;
        int c=0;
        for(int i=0;i<grp_ind.size();i++){
            cout<<grp_ind[i]<<"****"<<endl;
            if((grp_ind[i]-1)/k!=(i-c)){
                c+=1;
                move+=1;
            }
        }
        
        cout<<count+move<<endl;





    }
}