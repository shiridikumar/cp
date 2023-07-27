#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,m,k;
        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        vector<pair<int, int> > vec;
        int t1,t2;
        int flag=0;
        vector<int> r(m+1,0);
        vector<vector<int> > mat(n+1,r);
        for(int i=0;i<k;i++){
            cin>>t1>>t2;
            if(((abs(x-t1)+abs(y-t2))%2)==1){
                flag+=1;
            }
        }
        if(flag==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
