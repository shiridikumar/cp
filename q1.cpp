#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solution(int n,int m,int mi,int a[]){
    sort(a,a+n);
    int flag=0;
    int i=0;
    for(i=mi-1;i<n-mi;i+=mi){
        if(a[i]-a[i-mi]>m){
            flag=1;
            break;
        }
    }
    if(i!=n-1 && flag==0){
        if(a[n-1]-a[i-mi+1]>m){
            flag=1;
        }
    }
    if(flag==0){
        return n/mi;
    }
    else{
        return -1;
    }

}
int main(){
    int n,m,mi;
    cin>>n;
    cin>>m;
    cin>>mi;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solution(n,m,mi,a)<<endl;

}