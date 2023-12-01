#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        vector<int> vec;
        vec.push_back(1);
        vec.push_back(3);
        vec.push_back(5);
        int curr=7;
        while(vec.size()<n){
            vec.push_back(curr);
            curr+=2;
            // curr=vec[vec.size()-1]+vec[vec.size()-2]+1;
        }
        for(auto & it : vec){
            cout<<it<<" ";
        }
        cout<<endl;


    }
}