#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    // cout<<*a<<" "<<*b<<endl;
    int temp=*a;
    *a=*b;
    *b=temp;
    // cout<<*a<<" "<<*b<<endl;
}
int main(){
    int n;
    string temp;
    getline(cin,temp);
    string buff;
    stringstream t(temp);
    vector<int> a;
    while(getline(t,buff,'+')){
        a.push_back(stoi(buff));
    }  
    int one=0;int two=0;int three=a.size()-1;
    while(two<=three){
        if(a[two]==1){
            swap(&a[one],&a[two]);
            one+=1;
            two+=1;
        }
        else if(a[two]==2){
            two+=1;
        }
        else{
            swap(&a[two],&a[three]);
            // two+=1;
            three-=1;
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i];
        if(i!=a.size()-1){
            cout<<"+";
        }
    }
    cout<<endl;
    
}