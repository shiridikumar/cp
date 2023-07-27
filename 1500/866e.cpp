#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n,c;
        cin>>n>>c;
        // c=c%(long long)(1e9+7);
        long long a[n];
        long long s=0;
        long long sum=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            sum+=4*a[i];
            s+=(a[i]*a[i]);
        }
        cout<<sum<<endl;
        // cout<<s<<endl;
        c=s-c;
        // c=c;
        // cout<<-1*<<endl;
        int a2=sum*sum;
        for(int i=0;i<16*n;i++){
            a2-=c;
            cout<<a2<<""<<endl;
        }
        // cout<<a2<<endl;
        long long a1=4*n;
        //  cout<<sum*sum-4*a1*c<<endl;
        // cout<<a1<<" "<<sum<<" "<<c<<endl;
        long long ans=(-1*sum+sqrt(sum*sum-4*a1*c))/(2*a1);
        cout<<ans<<endl;
    }
}