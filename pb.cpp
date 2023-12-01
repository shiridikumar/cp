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
        vector<int> ind (n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            ind[a[i]]=i+1;
        }
        int cont=0;
        int curr=0;
        for(int i=1;i<n;i++){
            if(ind[i]>ind[i+1]){
                cont+=1;
            }
            else{
                curr+=cont;
                cont=0;
            }
        }

        cout<<curr+cont<<endl;



    }
}