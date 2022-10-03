#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin >>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                c+=1;
            }
        }
        int ind;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                ind =i;
                break;
            }
        }
        int ind2=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0'){
                ind2 =i;
                break;
            }
        }
        int ans=0;
        // cout<<ind<<ind2<<endl;
        int temp=ind;
        int k=0;
        ans=n;
        for(int i=temp;i<s.length();i++){
            if(s[i]=='1'){
                ans=max(ans,max(2*(i+1),i+1+c-k));
                k+=1;
            }

        }

        k=0;
        // cout<<temp<<endl;
        for(int i=temp;i>=0;i--){
            // cout<<ans<<"--------------"<<endl;
            if(s[i]=='1'){
                ans=max(ans,max(2*(n-i),n-i+c-k));
                k+=1;
            }

        }
        temp=ind2;
        k=0;
          for(int i=temp;i<s.length();i++){
            if(s[i]=='1'){
                ans=max(ans,max(2*(i+1),i+1+c-k));
                k+=1;
            }

        }

        k=0;
        cout<<temp<<endl;
        for(int i=temp;i>=0;i--){
            if(s[i]=='1'){
                ans=max(ans,max(2*(n-i),n-i+c-k));
                k+=1;
            }

        }


        cout<<ans<<endl;




    }
}