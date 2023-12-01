#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int ans=0;
int X=9;
int Y=2;
int Z=16;
class A{
    int *ptr;
    public:
    A(){
        ptr=new int;
        ans+=X;
    }
    A(const A & obj){
        this->ptr=new int;
        ans+=Y;

    }

    ~A(){
        delete ptr;
        ans+=Z;

    }
};


int main(){
    vector<A> vec;
    vec.push_back(A());
    cout<<ans<<endl;

}