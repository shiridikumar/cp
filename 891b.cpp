#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        string inp;
        cin>>inp;
        vector<int> vec;
        for(int i=inp.size()-1;i>=0;i--){
            vec.push_back(inp[i]-'0');
        }
        vec.push_back(0);
        long long ind=0;
        for(long long i=0;i<vec.size()-1;i++){
            if(vec[i]>=5){
                vec[i+1]+=1;
                ind=i+1;
            }
        }
        for(long long i=0;i<ind;i++){
            vec[i]=0;
        }
        // string st="";
        // cout<<endl;
        for(long long i=vec.size()-1;i>=0;i--){
            if(i==vec.size()-1 && vec[i]==0){
                continue;
            }
            cout<<vec[i];
        }
        cout<<endl;


    }
}