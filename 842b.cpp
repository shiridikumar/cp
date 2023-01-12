#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        int a[n];
        vector<int> ind(n+1,0);
       
        int c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                c+=1;
            }
        }
        cout<<ceil((c*1.0/k))<<endl;
    }
}