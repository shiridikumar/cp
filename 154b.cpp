#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        string a;
        string b;
        cin>>a>>b;
        vector<int> one;
        vector<int> zero;
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                if(a[i]=='1'){
                    one.push_back(i);
                }
                else{
                    zero.push_back(i);
                }
            }
        }
        int flag=1;
        int lp=0;
        int rp=0;
        while(lp<zero.size() && rp <one.size()){
            if(zero[lp]+1==one[rp]){
                flag=0;
                break;
            }
            else if (zero[lp]<one[rp]){
                lp++;
            }
            else{
                rp++;
            }
        }

        if(flag==0){
            // if(tes==49){
            //     cout<<a<<" "<<b<<endl;
            // }
            // else{
                cout<<"YES"<<endl;
            // }
        }
        else{
            // if(tes==49){
            //     cout<<b<<endl;
            // }
            // else{
                cout<<"NO"<<endl;
            // }
            // cout<<"NO"<<endl;
        }

    }
}