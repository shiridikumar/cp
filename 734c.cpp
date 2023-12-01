#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getfracs(vector<string> &vec,char c){

    vector<int > fracs;
    int count=0;
    int neg=0;
    for(int i=0;i<vec.size();i++){
        count=0;
        string st=vec[i];
        for(int j=0;j<st.size();j++){
            if(st[j]==c){
                count+=1;
            }
        }
        float tem=count*2-(int)st.size();
        fracs.push_back(tem);
        
    }
    sort(fracs.begin(),fracs.end(),greater<int > ());

    // int neg=0;
    int ind=0;
    for(int i=0;i<fracs.size();i++){
        // cout<<"---------------- "<<fracs[i]<<endl;
        neg+=fracs[i];
        if(neg<1){
            break;
        }
        ind+=1;
    }
    // cout<<"********************************"<<endl;
    return ind;
}


int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        vector<double> frac;
        vector<pair<int,int >>  counts;
        // string temp;
        vector<string> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        int ma=INT_MIN;
        vector<char> chars={'a','b','c','d','e'};
        for(auto &it:chars){
            ma=max(getfracs(vec,it),ma);
        }
        cout<<ma<<endl;

    }
}