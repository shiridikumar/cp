#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        // vector<char> r(8,'-');
        vector<string> vec;
        string temp;
        for(int i=0;i<8;i++){
            cin>>temp;
            vec.push_back(temp);
        }
        int r=-1;
        int c=-1;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(vec[i][j]!='.'){
                    r=i;
                    c=j;
                    break;

                }
            }
            if(r!=-1){
                break;
            }
        }
        string s="";
        for(int i=r;i<8;i++){
            if(vec[i][c]=='.'){
                break;
            }
            s.push_back(vec[i][c]);
        }
        
        cout<<s<<endl;


    }
}