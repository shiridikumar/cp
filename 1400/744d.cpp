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

        priority_queue<pair<int, int> > pq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0){
                pq.push(make_pair(a[i],i));
            }
        }
        vector<pair<int,int>  > vp;
        while(!(pq.empty()) && pq.size()>=2){
            pair<int,int> curr =pq.top();
            pq.pop();
            pair<int,int> second=pq.top();
            pq.pop();
            // cout<<curr.second<<" "<<second.second<<endl;
            vp.push_back(make_pair(curr.second,second.second));
            if(curr.first>1){
                pq.push(make_pair(curr.first-1,curr.second));
            }
            if(second.first>1){
                pq.push(make_pair(second.first-1,second.second));
            }
        }
        // cout<<endl;
        cout<<vp.size()<<endl;
        for(int i=0;i<vp.size();i++){
            cout<<vp[i].first+1<<" "<<vp[i].second+1<<endl;
        }
        // cout<<endl;



    }
}