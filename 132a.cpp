#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,x,a,b,c=0;
        cin>>n;
        int d[3];
        cin>>d[0]>>d[1]>>d[2];
        int mis=n;
        if(mis==0){
            cout<<"NO"<<endl;
        }
        else{
            while(1){
                if(mis==0 || c==3){
                    break;
                }
                mis=d[mis-1];
                c+=1;
                

            }
        }
        if(c==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
