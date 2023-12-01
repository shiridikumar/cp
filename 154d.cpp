#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int lp=0;
        int num=0;
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        prefix[0]=0;
        while(lp<n-1){
            if(a[lp] <= a[lp+1]){
                num++;
                prefix[lp+1]=num;
                lp++;
                while(lp<n-1 && a[lp]>a[lp+1]){
                    prefix[lp+1]=num;
                    lp++;
                }
            }
            else{
                lp++;
            }
        }
        int rp=n-1;
        num=0;
        suffix[rp]=num;
        while(rp>0){
            if(a[rp] <= a[rp-1]){
                num++;
                suffix[rp-1]=num;
                rp--;
                while(rp>0 && a[rp]>a[rp-1]){
                    suffix[rp-1]=num;
                    rp--;
                }
            }
            else{
                rp--;
            }
        }
        // cout<<num<<endl;
        int curr=INT_MAX;
        for(int i=1;i<n-1;i++){
            // cout<<i<<" "<<prefix[i]+1<<" "<<suffix[i+1]<<endl;
            curr=min(curr,prefix[i]+suffix[i+1]+1);
        }
        // cout<<prefix[n-1]<<" "<<suffix[0]<<endl;
        curr=min(curr,min(prefix[n-1]+1,suffix[0]));
        cout<<curr<<endl;







    }
}