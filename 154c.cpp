#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int tes = 0; tes < test; tes++)
    {
        string s;
        cin >> s;
        stack<char> st;
        int flag=0;
        int curr=0;
        int size=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-'){
                size-=1;
                if(st.top()!='1'){
                  
                    while(st.top()=='0'){
                        curr-=1;
                        st.pop();
                    }
                    if(!(st.empty())){
                        st.pop();
                    }
                }
            }
            if(s[i]=='+'){
                st.push('+');
                size+=1;
            }
            if(s[i]=='0'){
                if(st.empty() || st.top()=='1' || size<=1){
                    flag=1;
                    break;
                }
                else{
                    curr+=1;
                    st.push('0');
                }

            }
            if(s[i]=='1'){
                if(curr==0){
                    st.push('1');
                }
                else{
                    flag=1;
                    break;
                }
            }
        }

        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}