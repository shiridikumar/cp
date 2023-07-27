#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        vector<int> r(5,0);
        vector<vector<int> >  vec(n,r);
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cin>>vec[i][j];
            }
        }
        vector<int> curr=vec[0];
        int ind=0;
        int count=0;
        for(int i=1;i<n;i++){
            count=0;
            for(int j=0;j<5;j++){
                if(vec[i][j]<curr[j]){
                    count+=1;
                }
            }
            if(count>=3){
                curr=vec[i];
                ind =i;
            }
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(i==ind){
                continue;
            }
            count=0;
            for(int j=0;j<5;j++){
                if(vec[i][j]<curr[j]){
                    count+=1;
                }
            }
            if(count>=3){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<-1<<endl;
        }
        else{
            cout<<ind+1<<endl;
        }


    }
}