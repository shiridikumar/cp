#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n,m;
        cin>>n>>m;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        vector<int> e(n+1,0);
        int wt=0,total=0;
        int mi=INT_MAX;
        int ind=0;
        int avail=n;
        vector<int> task(m,0);
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i=0;i<m;i++){
            if(e[a[i]]==0){
                total+=1;
                e[a[i]]+=1;
                avail-=1;
                task[i]=1;
            }
            
        }
        for(int i=0;i<m;i++){
            if(task[i]==0){
                if(e[a[i]]<mi){
                    e[a[i]]+=1;
                }
                else{
                    e[ind]+=1;
                }
            }
        }
    }
}