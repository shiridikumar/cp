#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long rad,sec;
        cin>>rad>>sec;
        long long extra=pow((sec/rad)+1,2);
        long long normal=pow(sec/rad,2);
        long long div=rad-sec%rad;
        cout<<extra*(sec%rad)+div*normal<<endl;



    }
}
