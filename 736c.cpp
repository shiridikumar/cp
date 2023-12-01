#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   vector<int > q(n+1,0);
   int u,v;
   for(int i=0;i<m;i++){
       cin>>u>>v;
       if(v>u){
           q[u]+=1;
       }
       if(v<u){
           q[v]+=1;
       }
   }
   int queries;
   cin>>queries;
   int qt;
   int count=0;
   for(int i=1;i<=n;i++){
       if(q[i]==0){
        //    mp[0]+=1;
        count+=1;
       }
   }
   for(int i=0;i<queries;i++){
       cin>>qt;
       if(qt==1){
           cin>>u>>v;
           if(v>u){
               if(q[u]==0){
                   count-=1;
               }
               q[u]+=1;
           }
           if(u>v){
               if(q[v]==0){
                   count-=1;
               }
               q[v]+=1;
           }
       }
       else if(qt==2){
           cin>>u>>v;
           if(v>u){
               q[u]-=1;
               if(q[u]==0){
                   count+=1;
               }
           }
           if(u>v){
               q[v]-=1;
               if(q[v]==0){
                   count+=1;
               }
           }
       }
       if(qt==3){
           cout<<count<<endl;

       }
   }
}