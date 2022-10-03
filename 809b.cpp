#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> towers(n+1,0);
        vector<int> last(n+1,0);
        for(int i=0;i<n;i++){
            if(towers[a[i]]==0){
                towers[a[i]]++;
                last[a[i]]=i;
            }
            else if((i-last[a[i]]-1)%2==0){
                towers[a[i]]+=1;
                last[a[i]]=i;
            }
        }
        //  cout<<"test : "<<t+1<<endl;
        for(int i=1;i<=n;i++){
            cout<<towers[i]<<" ";
        }
         cout<<endl;
    }

}