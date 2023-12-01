#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> vec;
        vec.push_back(a[0]);

        for(long long i=1;i<n;i++){
            if(vec[vec.size()-1]<=a[i]){
                vec.push_back(a[i]);
            }
            else{
                vec.push_back(a[i]);
                vec.push_back(a[i]);
            }
        }
        cout<<vec.size()<<endl;
        for(auto & it : vec){
            cout<<it<<" ";
        }
        cout<<endl;




    }
}