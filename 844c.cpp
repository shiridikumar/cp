#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}

int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        string alpha="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<alpha.size();i++){
            mp[alpha[i]]=0;
        }
        for(int i=0;i<s.size();i++){
            mp[s[i]]+=1;
        }
        string t=s;
        int ind=-1;
        int curr=INT_MAX;

        vector<int> counts;

        for(auto & ele : mp){
            counts.push_back(ele.second);
        }
        sort(counts.begin(),counts.end(), greater<int>());
        for(int i=1;i<=26;i++){
            if(n%i!=0){
                continue;
            }
            int ans=0;
            for(int j=0;j<i;j++){
                ans+=abs(counts[j]-n/i);

            }
            for(int j=i;j<counts.size();j++){
                ans+=counts[j];
            }
            if(ans<curr){
                curr=ans;
                ind=i;
            }
        }

        vector<char> extra;
        vector<pair<int,int> > less;
        int k=0;
        vector<pair<int,int> > more;
        for(auto & ele : mp){
            if(ele.second>=n/ind){
                k+=1;
            }
            if(ele.second<n/ind){
                less.push_back(make_pair(ele.first,ele.second));
            }
        }
        k=ind-k;
        sort(less.begin(),less.end(),comp);

        int lp=0;int rp=0;
        // cout<<k<<ind<<endl;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>n/ind){
                mp[s[i]]-=1;
                s[i]=less[rp].first;
                mp[less[rp].first]+=1;
                if(mp[less[rp].first]==n/ind){
                    rp++;
                }
            }
        }
        // int rp=0;
        for(int i=k;i<less.size();i++){
            mp[less[i].first]=0;
        }

        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==0){
                while(mp[less[rp].first]==n/ind){
                    rp++;
                }
                s[i]=less[rp].first;
                mp[s[i]]+=1;
            }
        }
        k=0;
        for(int i=0;i<s.size();i++){
            if(t[i]!=s[i]){
                k+=1;
            }
        }
        cout<<k<<endl;
        cout<<s<<endl;
    }

}