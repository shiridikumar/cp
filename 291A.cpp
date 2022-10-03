#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    string test;
    cin>>test;
    int x;
    int i=0;
    while(i<test.length()){
        x=test[i];
        if(x<=4+'0'){
            test[i]=x;
        }
        else{
            if(test[i]!='9' ||  i!=0){
                test[i]='0'+(('0'+9)-x);
            }
        }
        i+=1;
    }
    cout<<test<<endl;
}