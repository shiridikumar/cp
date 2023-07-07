#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    // for(long long tes=0;tes<test;tes++){
    long long n,k,x;
    cin>>n>>k>>x;
    long long count=0;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    // vector<long long> hp;
    priority_queue <long long, vector<long long>, greater<long long> > hp;
    // cout<<x<<"????"<<endl;
    long long groups=1;
    for(long long i=0;i<n-1;i++){
        if(a[i+1]-a[i]>x){

            hp.push((a[i+1]-a[i])/x-((a[i+1]-a[i])%x==0));
            // cout<<(a[i+1]-a[i])/x-((a[i+1]-a[i])%x==0)<<"***"<<x<<"-----"<<a[i+1]<<"?? "<<(a[i+1]-a[i])/x<<endl;
            groups+=1;
        }
    }
    // long long groups=hp.size();

    while(!(hp.empty()) && k>=hp.top()){
        // cout<<hp.top()<<" ** "<<k<<endl;
        k-=hp.top();
        groups-=1;
        hp.pop();
    }
    cout<<groups<<endl;
    // }
}