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
        vector<long long> odd;
        vector<long long> even;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                odd.push_back(i+1);
            }
            else{
                even.push_back(i+1);
            }

        }
        if(odd.size()>=3){
            cout<<"YES"<<endl;
            cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
        }
        else if(odd.size()>=1 && even.size()>=2){
            cout<<"YES"<<endl;
            cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}