#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        string s;
        cin>>s;
        long long n=s.size();
        vector<long long> vec;
        long long sum=0;
        long long count=0;
        if(s[0]=='?'){
            count+=1;
        }
        vec.push_back(0);
        long long prev=0;
        long long diff=0;
        for(long long i=1;i<n;i++){
            if(s[i]!='?'){
                if(count!=0 && i-count-1>=0 && s[i-1]=='?'){
                    if(s[i-count-1]==s[i] && count%2==0){
                        diff=i-prev;
                        sum+=((diff)*(diff+1))/2-((count)*(count+1))/2;
                        prev=i-count;
                        // count=0;
                        // cout<<i<<" "<<prev<<endl;
                    }
                    else if(s[i-count-1]!=s[i] && count%2!=0){
                        diff=i-prev;
                        sum+=((diff)*(diff+1))/2-((count)*(count+1))/2;
                        prev=i-count;
                        // count=0;
                        // cout<<i<<" "<<prev<<endl;
                    }
                    // count=0;
                }
                if(s[i-1]!='?' && s[i-1]==s[i]){
                    diff=i-prev;
                    sum+=((diff)*(diff+1))/2;
                    count=0;
                    prev=i;
                }
                count=0;
            }
            else{
                count+=1;
            }
            
        }
        // cout<<prev<<endl;
        diff=n-prev;
        sum+=(diff*(diff+1))/2;
        cout<<sum<<endl;



    }
}