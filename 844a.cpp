#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        int w,d,h,a,b,f,g;
        cin>>w>>d>>h;
        cin>>a>>b>>f>>g;
        int tot1=h+min(a+f,w+w-a-f)+abs(g-b);
        int tot2=h+min(g+b,d+d-g-b)+abs(a-f);
        cout<<min(tot1,tot2)<<endl;




    }
}