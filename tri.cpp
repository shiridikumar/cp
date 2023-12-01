#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    deque<int> dq;
    for(int i=1;i<=10;i++){
        if(i+2%4==0){
            dq.push_back(i);
        }
        else{
            dq.push_front(i);
        }
    }
    for(auto x:dq){
        cout<<x<<" " ;
    }
    cout<<endl;

}
int main(){
    solve();
}