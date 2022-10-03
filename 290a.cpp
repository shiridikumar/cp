#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int j=0;
    for(int i=0;i<m;i++){
        if(i%2==0){
            cout.width(n);
            cout.fill('#');
            cout<<""<<endl;
        }
        else{
            if(j){
                cout<<"#";
                cout.width(n-1);
                cout.fill('.');
                cout<<""<<endl;
            }
            else{
                cout.width(n);
                cout.fill('.');
                cout<<"#"<<endl;
            }
            j=1-j;
        }
    }
}