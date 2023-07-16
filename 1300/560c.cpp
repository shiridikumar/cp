#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> temp;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(temp.size()%2==0 || temp.back()!=s[i]){
            temp.push_back(s[i]);
        }
    }
    // cout<<temp.size()<<endl;
    cout<<(n+(temp.size()%2!=0)-temp.size())<<endl;
    for(int i=0;i<temp.size()-temp.size()%2!=0;i++){
        cout<<temp[i];
    }
    cout<<endl;

}