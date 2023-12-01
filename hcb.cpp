#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        string dup=a;
        sort(a.begin(),a.end());
        if(k%2==0){
            cout<<a<<endl;
        }
        else{
            map<char,int> odd;
            map<char,int> even;
            for(int i=0;i<dup.size();i++){
                if(i%2==0){
                    even[dup[i]]+=1;
                }
                else{
                    odd[dup[i]]+=1;
                }
            }
            string res;
            for(int i=0;i<dup.size();i++){
                if(i%2==0){
                    for(auto & it : even){
                        if(it.second>0){
                            res.push_back(it.first);
                            it.second-=1;
                            break;
                        }
                    }
                }
                else{
                    for(auto &it : odd){
                        if(it.second>0){
                            res.push_back(it.first);
                            it.second-=1;
                            break;
                        }
                    }
                }
            }
            cout<<res<<endl;


        }




    }
}