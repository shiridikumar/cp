#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        string s;
        cin>>s;
        map<char,int> mp;
        vector<map<char,int> > vec(s.size(),mp);
        map<char,int> vals;
        vals['A']=1;
        vals['B']=10;
        vals['C']=100;
        vals['D']=1000;
        vals['E']=10000;
        vec[0]['A']=0;
        vec[0]['B']=0;
        vec[0]['C']=0;
        vec[0]['D']=0;
        vec[0]['E']=0;
        string seq="ABCDE";
        for(int i=1;i<s.size();i++){
            vec[i][s[i]]=vec[i-1][s[i]]+vals[s[i]];
            for(auto & it :seq){
                if(it!=s[i]){
                    vec[i][it]=vec[i-1][it];
                }
            }
        }
        int curr=0;
        int actual=0;
        for(int i=1;i<s.size();i++){
            int gain=0;
            actual+=vals[s[i]];
            if(s[i]=='B'){
                gain=vec[i-1]['A']-10;
            }
            if(s[i]=='C'){
                gain=vec[i-1]['A']+vec[i-1]['B']-100;
            }
            if(s[i]=='D'){
                gain=vec[i-1]['A']+vec[i-1]['B']+vec[i-1]['C']-1000;
            }
            if(s[i]=='E'){
                gain=vec[i-1]['A']+vec[i-1]['B']+vec[i-1]['C']+vec[i-1]['D']-10000;
            }
            curr=max(curr,gain);
        }
        cout<<actual<<endl;
        cout<<actual+curr<<endl;



    }
}