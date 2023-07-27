#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        vector<int> r;
        vector<vector<int> > colors(k+1,r);
        int a[n];
        for(int i=1;i<=k;i++){
            colors[i].push_back(0);
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
            colors[a[i]].push_back(i+1);
        }
        for(int i=1;i<=k;i++){
            colors[i].push_back(n+1);
        }
        vector<int> maxdiff(k+1,0);
        vector<int> secondmax(k+1,0);
        // vector<int> prevind(k+1,-1);

        for(int i=1;i<=k;i++){

            for(int j=1;j<colors[i].size();j++){
                if(colors[i][j]-colors[i][j-1]-1>= maxdiff[i]){
                    secondmax[i]=maxdiff[i];
                    maxdiff[i]=colors[i][j]-colors[i][j-1]-1;
                }
                else if(colors[i][j]-colors[i][j-1]-1> secondmax[i]){
                    secondmax[i]=colors[i][j]-colors[i][j-1]-1;
                    // maxdiff[i]=colors[i][j]-colors[i][j-1]-1;
                }


            }
        }
        int mi=INT_MAX;
        for(int i=1;i<=k;i++){
            // cout<<maxdiff[i]<<" "<<secondmax[i]<<endl;
            // int temp=max((int)ceil(maxdiff[i]/2.0),secondmax[i]);
            mi=min(mi,max(maxdiff[i]/2,secondmax[i]));

        }
        cout<<mi<<endl;


        


    }
}