#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    setprecision(9);
    double h,l;
    cin>>h>>l;
    double ans=((l*l-h*h)*1.0)/(2.0*h*1.0);
    cout<<fixed<<ans<<endl;
}