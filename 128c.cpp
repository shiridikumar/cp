#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        string s ,t;
        cin>>s;
        cin>>t;
        if(s.length()<t.length()){
            string temp=s;
            s=t;
            t=temp;
        }
        int flag=0;
        int div=ceil(s.length()*1.0/t.length());
        for(int i=0;i<div;i++){
            for(int j=0;j<t.length();j++){
                if(i*t.length()+j>=s.length()){
                    break;
                }
                if(t[j]!=s[i*t.length()+j]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }

        for(int i=0;i<div;i++){
            int p=0;
            for(int j=t.length()-1;j>=0;j--){
                int ans=s.size()-t.size()*i-(p+1);
                // cout<<j<<" "<<ans<<" "<<i<<" "<<p<<endl;
                if(ans<0){
                    break;

                }
                if(t[j]!=s[(s.length()-t.length()*i)-1-p]){
                    // cout<<j<<" "<<s.length()-t.length()*i-p<<" "<<i<<" "<<p<<endl;
                    flag=1;
                    break;
                }
                p++;
            }
            if(flag==1){
                break;
            }
        }

        if(flag==1){
            cout<<-1<<endl;
        }
        else{
            int a=s.length();
            int b=t.length();
            int ind=0;
            for(int i=a;i<=a*b;i++){
                if(i%a==0 && i%b==0){
                    ind =i/a;
                    break;
                }
            }
            for(int i=0;i<ind;i++){
                cout<<s;
            }
            cout<<endl;
        }




    }
}