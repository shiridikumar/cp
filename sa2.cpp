#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void foo(int v ,int w ,int x ,int y ,int z){
    int a[]={v,w,x,y,z},*p;
    p=a;
    ++*p;
    printf("%d.",*p);
    p+=2;
    printf("%d",*p);
}
int main(){
    foo(5,4,9,11,27);
}
