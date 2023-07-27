#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;
}

int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> c(n,0);
        for(int i=0;i<n;i++){
            int gc=gcd(a[i],b[i]);
            int num=a[i]/gc+b[i]/gc;
            c[i]=num%2;
        }
        int count=0;

        for(int i=0;i<n;i++){
            count+=c[i];
        }
        if(count==0 || count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}