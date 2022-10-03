#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int mi=INT_MAX;
    int ma=INT_MIN;
    int ind;int ind1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=mi){
            mi=a[i];ind=i;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]>=ma){
            ind1=i;
            ma=a[i];
        }
    }
    if(ind1>ind){
        // cout<<ind1<<"  "<<ind<<endl;
        cout<<ceil((float)(ind1+((n-1)-ind)-1))<<endl;
    }
    else{

        cout<<ceil((float)(ind1+((n-1)-ind)))<<endl;

    }

}