#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        string s, t;
        cin >> s >> t;
        // even
        long long l = 1, r = s.size() - 1;
        long long lp = 0, rp = t.size() - 1;
        long long rem = t.size();
        while(r>=0){
            if((s.size()-r-1)%2!=0){
                r-=1;
            }
            else{
                if(s[r]!=t[rp]){
                    r-=2;
                }
                else{
                    break;
                }
            }
        }
        // cout<<r<<endl;
        if(r>=0){
            rp-=1;
            r--;
            rem-=1;
        }
        while(r>=0 && rem>0){
            while(r>=0 && s[r]!=t[rp]){
                r-=2;
            }
            if(s[r]==t[rp]){
                rem-=1;
                r--;
                rp--;
            }
            if(rem==0){
                break;
            }
        }
        if(rem!=0){
            // cout<<r<<endl;
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}
// QGSHRUCGB

// KXXNBCJZYHSLFFFTOVVOTJNTMTHBXC...SPQFSNDFYGTAQXRJAYLMLWXODREHOTN