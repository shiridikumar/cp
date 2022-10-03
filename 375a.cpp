#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b,c;
    float temp;
    cin>>a>>b>>c;
    cout<<min(abs(a-b)+abs(a-c),min(abs(b-a)+abs(b-c),abs(c-a)+abs(c-b)))<<endl;

}