#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long dis(string a,string b){
    long long l=0;
    long long r=0;
    long long moves=0;
    while(l<a.size() && r<b.size()){
        if(a[l]!=b[r]){
            l+=1;
            moves+=1;
        }
        else{
            l+=1;r+=1;
        }
    }
    // cout<<l<<" **  "<<r<<" -- >"<< moves+a.size()-l +b.size()-r<<endl;
    return moves+a.size()-l +b.size()-r;
}
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        vector<string> nums;
        long long dup=n;
        long long init=to_string(dup).size();
        long long curr=1;
        long long i=0;
        long long ma=LONG_LONG_MAX;


        while(curr<=2*init && i<log2(1e18)){
            string temp=to_string((long long)pow(2,i));
            // cout<<temp<<" "<<init<<" ** "<<curr<<endl;
            curr=temp.size();
            if(curr<=2*init){
                // cout<<n<<" ,, "<<temp<<endl;
                long long ans=dis(to_string(n),temp);
                ma=min(ma,ans);
                // nums.push_back(temp);
            }
            // if(i>35){
            //     break;
            // }
            // break;

            i+=1;
        }
        cout<<ma<<endl;
        

        



    }
}