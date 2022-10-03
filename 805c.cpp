#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;int a[n];
        int ind;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                ind=i;
            }
        }
        int lf;
        int rp,lp;
        if(ind !=0){
            lf=a[min_element(a,a+(ind-1))-a];
            lp=min_element(a,a+(ind-1))-a;
        }
        else{
            lf=INT_MAX;
        }
        int rf;
        if(ind!=n-1){
            rf=a[min_element(a,a+(ind+1))-a];
            rp=min_element(a,a+(ind+1))-a;
        }
        int left=0;
        int right=0;
        for(int i=0;i<ind;i++){
            if(a[i]>lf && a[i]>rf){
                left++;
            }
        }
        for(int i=ind;i<n;i++){
            if(a[i]>left && a[i]>rf){
                right++;
            }
        }
        int l=1;
        if(ind !=0){
            for(int j=1;j<=ind-1;j++){
                l*=j;
            }
        }
        else{
            l=0;
        }
        
        cout<< (ind-1)




        
    }
}