#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int m,n;
        cin>>m>>n;
        string temp;
        vector<string> rows;
        vector<pair<int,int> > robos;
        for(int i=0;i<m;i++){
            cin>>temp;
            for(auto it=temp.begin();it!=temp.end();it++){
                if(*it =='R'){
                    robos.push_back(make_pair(i,it-temp.begin()));
                }
            }
        }
        // cout<<endl;
        int overall_flag=1;
        for(auto it=robos.begin();it!=robos.end();it++){
            // cout<<(*it).first<<" "<<(*it).second<<endl;
            int first=(*it).first;
            int second=(*it).second;
            int flag=0;
            for(auto it2=robos.begin();it2!=robos.end();it2++){
                if(it2!=it){
                    if((*it2).first-first<0 || (*it2).second-second<0){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0){
                cout<<"YES"<<endl;
                overall_flag=0;
                break;
            }
        }
        if(overall_flag==1){
            cout<<"NO"<<endl;
        }
        // cout<<"***************"<<"test case : "<<t+1<<endl;
        robos.clear();

    }
}