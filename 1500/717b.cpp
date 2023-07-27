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
        vector<long long> prefix (n,0);
        vector<long long > suffix(n,0);
        suffix[n-1]=a[n-1];
        prefix[0]=a[0];
        for(long long i=1;i<n;i++){
            prefix[i]=prefix[i-1]^a[i];
            suffix[n-i-1]=suffix[n-i]^a[n-i-1];
        }
        int flag=0;

        for(int i=0;i<n-1;i++){
            if(prefix[i]==suffix[i+1]){
                flag=1;
            }
        }
        int req=prefix[n-1];
        int ind=0;
        int curr=0;
        int count=0;
        while(ind<n){
            curr=curr^a[ind];
            if(curr==req){
                curr=0;
                count+=1;
            }
            ind+=1;
        }
        // cout<<count<<" "<<flag<<endl;
        if(curr==0){
            if(count<=1){
                if(flag==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}