#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int step_function(int n){
    if(n==1){
        return 0;
    }
    if(n%2){
        return step_function(n-1);
    }
    else{
        return step_function(n/2)+1;
    }

}
int main(){
    int n;
    n=1346;
    cout<<step_function(n);
}