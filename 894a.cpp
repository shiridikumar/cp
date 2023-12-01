#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,m;
        cin>>n>>m;
        vector<string> vec(n,"");
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        string act="vika";
        int ind=0;
        int flag=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[j][i]==act[ind]){
                    ind++;
                    break;
                }
            }
            if(ind>=4){
                flag=1;
                break;
            }
        }

        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}