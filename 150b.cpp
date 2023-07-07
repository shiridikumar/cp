#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long temp;
        vector<long long> a;
        vector<long long> status;
        long long flag=0;
        string s ="";
        for(long long i=0;i<n;i++){
            cin>>temp;
            if(i==0){
                a.push_back(temp);
                cout <<1<< std::flush;
                // s.push_back('1');
            }
            else{
                if(flag==1 && a[0]<temp){
                    // s.push_back('0');
                    cout <<0<< std::flush;
                    continue;
                }
                if(a[a.size()-1]>temp){
                    if(flag==0 && a[0]>=temp){
                        flag=1;
                        a.push_back(temp);
                        // s.push_back('1');
                         cout <<1<< std::flush;
                    }
                    else{
                        // s.push_back('0');
                        cout <<0<< std::flush;
                    }
                }
                else{
                    a.push_back(temp);
                     cout <<1<< std::flush;
                }

            }
        }
        cout<<endl;

    }
}