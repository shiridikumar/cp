#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int m,n;
        cin>>m>>n;
        vector<string> mat(m,"");
        for(int i=0;i<m;i++){
            cin>>mat[i];
        }
        vector<char> r(n,'.');
        vector<vector<char> > res(m,r);
        int lodd=0;
        int rodd=0;

        vector<pair<int,int> > rows(m);
        vector<pair<int,int > > cols(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[j][i]=='L'){
                    if(lodd%2==0){
                        res[j][i]='W';
                        rows[j].first+=1;
                        cols[i].first+=1;
                    }
                    else{
                        res[j][i]='B';
                        rows[j].second+=1;
                        cols[i].second+=1;
                    }
                    lodd=1-lodd;
                }
                if(mat[j][i]=='R'){
                    if(rodd%2==0){
                        res[j][i]='B';
                        rows[j].second+=1;
                        cols[i].second+=1;
                    }
                    else{
                        res[j][i]='W';
                        rows[j].first+=1;
                        cols[i].first+=1;
                    }
                    rodd=1-rodd;
                }
            }
        }
        int uodd=0;
        int dodd=0;

         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]=='U'){
                    if(uodd%2==0){
                        res[i][j]='W';
                        rows[i].first+=1;
                        cols[j].first+=1;
                    }
                    else{
                        res[i][j]='B';
                        rows[i].second+=1;
                        cols[j].second+=1;
                    }
                    uodd=1-uodd;
                }
                if(mat[i][j]=='D'){
                    if(dodd%2==0){
                        res[i][j]='B';
                        rows[i].second+=1;
                        cols[j].second+=1;
                    }
                    else{
                        res[i][j]='W';
                        rows[i].first+=1;
                        cols[j].first+=1;
                    }
                    dodd=1-dodd;
                }
            }
        }
        int flag=0;

        for(int i=0;i<rows.size();i++){
            if(rows[i].first!=rows[i].second){
                flag=1;
                break;
            }
        }
        for(int i=0;i<cols.size();i++){
            if(cols[i].first!=cols[i].second){
                flag=1;
                break;
            }
        }

        if(flag==1){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout<<res[i][j];
                }
                cout<<endl;
            }
        }
    }
}