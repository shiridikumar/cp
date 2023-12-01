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
        vector<int> vec(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            vec[a[i]]+=1;
        }
        int ma=INT_MIN;
        int unique=0;
        vector<int> res;
        for(int i=1;i<vec.size();i++){
            ma=max(vec[i],ma);
            if(vec[i]!=0){
                unique+=1;
                res.push_back(i);
            }
        }
        int ind=1;
        while(res.size()<k){
            if(vec[ind]==0){
                res.push_back(ind);
            }
            ind+=1;
        }
        if(k<unique){
            cout<<-1<<endl;
        }
        else{
            cout<<n*k<<endl;
            for(int i=0;i<n;i++){
                for(auto &it : res){
                    cout<<it<<" ";
                }
            }
            cout<<endl;
        }



    }
}