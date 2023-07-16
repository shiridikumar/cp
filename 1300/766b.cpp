#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,m;
        cin>>n>>m;
        int ind=0;
        int cut=0;
        if(n!=m){
            cut=2;
        }
        int start=min(n,m);
        vector<int> vec(m+n-2,0);
        int x,y;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                x=abs(i-n/2);
                if(n%2==0){
                    x=min(x,abs(n/2-1-i));
                }
                y=abs(j-m/2);
                if(m%2==0){
                    y=min(y,abs(m/2-1-j));
                }
                // cout<<x<<" "<<y <<": "<<i<<" " <<j<<endl;
                vec[x+y]+=1;
            }
        }
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i];j++){
                cout<<m/2+n/2+i<<" ";
            }
        }
        cout<<endl;


    }
}