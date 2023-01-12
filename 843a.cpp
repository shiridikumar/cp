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
        int n = s.size();
        if (s[0] != s[n - 1])
        {
            if (s[0] == 'b')
            {
                int ind = -1;
                for (int i = 1; i < s.size() - 1; i++)
                {
                    if (s[i] == 'a')
                    {
                        ind = i;
                        break;
                    }
                }
                if(ind==-1){
                    cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;
                }
                else{
                    cout<<s.substr(0,ind)<<" "<<s[ind]<<" "<<s.substr(ind+1,n-(ind+1))<<endl;
                }
            }
            else{
                int ind=-1;
                for(int i=1;i<n-1;i++){
                    if(s[i]=='b'){
                        ind=i;
                        break;

                    }
                }
                if(ind ==-1){
                    cout<<s.substr(0,n-2)<<" "<<s[n-2]<<" "<<s.substr(n-1,1)<<endl;
                }
                else{
                    cout<<s.substr(0,ind)<<" "<<s.substr(ind,n-ind-1)<<" "<<s[n-1]<<endl;
                }
            }
        }
         else
            {
                cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;
            }
    }
}