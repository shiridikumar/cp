#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int x=max(i,j)%min(i,j);
                if(x==0){
                    x=min(i,j);
                }
                int lcm=(i*j)/x;
                if(lcm/x<=3){
                    c+=1;
                }
            }
        }
        cout<<c<<"************"<<endl;
    }
}