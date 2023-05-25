#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool start_parity(int a){    
    int k=0;
    int odd=0;
    int even=0;
    while(a>0){
        if(k==0){
            odd+=a%10;
            k=1;
        }
        else{
            even+=a%10;
            k=0;
        }
        a=a/10;

    }
    if(odd==even){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int a,b;
    cin>>a>>b;
    a=a+1;
    int lb=((a+10)/10)*10+1;
    int ub=(b/10)*10;
    int e1=((a/10)*10-1)-a/2;

    cout<<lb<<" "<<ub<<endl;
    int middle=(ub-lb)/2;

    cout<<middle+start_parity(lb)+1<<endl;

    cout<<start_parity(lb)<<endl;


}