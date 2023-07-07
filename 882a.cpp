#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n,m;
        cin>>m>>n;
        vector<int> a(m,0);
        vector<int> b(n,0);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        make_heap(a.begin(),a.end());
        make_heap(b.begin(),b.end());
        int turn=0;
        while(!(a.empty()) && !(b.empty())){
            int el1=a[0];
            int el2=b[0];
            cout<<el1<<" "<<el2<<endl;
            a.pop_back();
            b.pop_back();
            if(el1-el2>0){
                a.push_back(el1-el2);
                push_heap(a.begin(),a.end());
            }
            if(el2-el1>0){
                cout<<"************"<<endl;
                b.push_back(el2-el1);
                push_heap(b.begin(),b.end());
            }
            turn+=1;
            pop_heap(a.begin(),a.end());
            pop_heap(b.begin(),b.end());

        }
        if(a.empty() && b.empty()){
            cout<<"Draw"<<endl;
        }
        else if(turn%2==0){
            cout<<"Tsondu"<<endl;
        }
        else{
            cout<<"Tenzing"<<endl;
        }
        

        


    }
}