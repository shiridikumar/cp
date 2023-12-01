#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        string s;
        cin>>s;
        int three=0;
        int one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one=i;
            }
            if(s[i]=='3'){
                three=i;
            }

        }

        if(three>one){
            cout<<13<<endl;
        }
        else{
            cout<<31<<endl;
        }


    }
}
