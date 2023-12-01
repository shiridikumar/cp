#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        vector<int> r(n,0);
        vector<vector<int> >  mat(n,r);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }
        string temp="";
        for(int i=0;i<30;i++){
            temp.push_back('0');
        }
        vector<string> s(n,temp);
        vector<int> vis(n,0);
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int val=mat[i][j];
                int ind=0;
                // cout<<val<<"***********"<<endl;
                while(ind<30){
                    if(val&1){
                        if(vis[i]==0){
                            s[i][ind]='1';
                        }
                        if(vis[j]==0){
                            s[j][ind]='1';
                        }
                    }
                    else{
                        s[i][ind]='0';
                        s[j][ind]='0';
                        // if(i==1 && j==2){
                        //     cout<<s[i]<<" "<<s[j]<<endl;
                        // }
                        
                    }
                    ind+=1;
                    val=val>>1;

                }
                if(flag==1){
                    break;
                }
                vis[i]=1;
                vis[j]=1;
            }
            if(flag==1){
                break;
            }
        }

        vector<int> fin;
        for(auto &it: s){
            reverse(it.begin(),it.end());
            std::bitset<64> bits(it);
            unsigned long decimalNumber = bits.to_ulong();
            fin.push_back((int)decimalNumber);
        }
        // cout<<flag<<endl;
        // for(auto & it : fin){
        //     cout<<it<<endl;
        // }


        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((fin[i] | fin[j]) !=mat[i][j]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }

        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;

            for(auto &it : fin){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}