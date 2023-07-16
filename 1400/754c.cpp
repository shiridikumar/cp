#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        vector<long long> inds;
        long long c1=LONG_LONG_MAX;
        long long c2=LONG_LONG_MAX;
        long long c0=0;
        long long ma=LONG_LONG_MAX;
        long long ind=0;
        while(ind <n && s[ind]!='a'){
            ind+=1;
        }
        long long length=0;
        long long index=0;
        for(long long i=ind;i<n;i++){
            if(s[i]=='a'){
                if(ma>max(c1,c2) || (ma==max(c1,c2) && ((long long)(c1+c2))<length)){
                    length=c1+c2;
                    index=i;
                    ma=max(c1,c2);
                }
                c1=0;
                c2=0;
                c0+=1;
            }
            if(s[i]=='b'){
                c1+=1;
            }
            if(s[i]=='c'){
                c2+=1;
            }
        }
        if(ma==LONG_LONG_MAX){
            cout<<-1<<endl;
        }
        else{
            if(ma==0){
                cout<<2<<endl;
            }
            else if(ma==1){
                cout<<2+length<<endl;
            }
            else{
                if(ma==2 && c0>=3){
                    if (s.find("abbacca") != string::npos || s.find("accabba")!=string::npos){
                        cout<<7<<endl;
                    }
                    else{
                        cout<<-1<<endl;
                
                    }
                }
                else{
                    cout<<-1<<endl;
                }
            }
        }



    }
}