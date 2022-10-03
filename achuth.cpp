#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string inp;
    int prev=-1;
    int c=0;
    int s=0;int flag=0;
    cin>>inp; 
    vector<char> qu;
    for(auto it=inp.begin();it!=inp.end();it++){
        if(*it=='{'){
            qu.push_back(*it);
            c+=1;
            prev=1;
        }
        if(*it==']'){
            if(qu[qu.size()-1]=='{'){
                flag=1;
                break;
            }
            else{
                if(qu[qu.size()-1]=='['){
                qu.pop_back();
                s-=1;
                }
                else{
                    qu.push_back(*it);
                }

            }
        }
        if(*it=='['){
            qu.push_back(*it);
            s+=1;
            prev=0;
        }
        if(*it=='}'){
            if(qu[qu.size()-1]=='['){
                flag=1;
                break;
            }
            else{
                if(qu[qu.size()-1]=='{'){
                c-=1;
                qu.pop_back();
                }
                else{
                    qu.push_back(*it);
                }
            }
        }
        
    }
    cout<<flag<<" "<<s<<" "<<c<<endl;
    if(flag==1 || s!=0 || c!=0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

}