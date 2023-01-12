#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[n];
        int o=0;int e=0;
        int mis=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e+=1;
            }
            else{
                o+=1;
            }
            if(i%2==0){
                if(a[i]%2!=0){
                    mis+=1;
                }

            }
        }
        if(n%2==0){
            if(o==e){
                cout<<mis<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            if(e==(o+1)){
                cout<<mis<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }



    }
}