#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,k;
        cin>>n>>k;
        int a[n];
        int odd=0;
        vector<int> pref;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1){
                odd+=1;
                pref.push_back(i+1);
            }
        }
        if((odd%2==1 && k%2==0) || (odd%2==0 && k%2==1) || k>odd){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int gap=odd/k;
            for(int i=0;i<k-1;i++){
                cout<<pref[i]<<" ";
            }
            cout<<n<<endl;

        }
        


    }
}