#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long long, long long>& a,
        pair<long long, long long>& b)
{
    return a.second < b.second;
}

int main()
{
    long long test;
    cin >> test;
    for (long long tes = 0; tes < test; tes++)
    {
        long long n;
        long long k;
        cin >> n >> k;
        long long a[n];
        vector <pair<long long,long long > > mp;
        vector<pair< long long,long long> > mp1;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1.push_back(make_pair(i,a[i]));
        }

        long long p[n];
        for(long long i=0;i<n;i++){
            cin>>p[i];
        }
        for(long long i=0;i<n;i++){
            mp.push_back(make_pair(i,p[i]));
        }

        sort(mp.begin(),mp.end(),cmp);
        // sort(mp1.begin(),mp1.end(),cmp);
        long long ma=*max_element(a,a+n);
        long long start=-1;
        vector<pair<long long,long long> >::iterator it ;
        vector<pair<long long,long long> >::iterator it1 ;
        it=mp.begin();
        it1=mp1.begin();
        long long ind=(*it).first;
        long long curr=ind;
        long long init=k;
        long long till=0;
        while(k>0 && ma>0 && it!=mp.end()){
            ma-=k;
            till+=k;

            while(a[curr]<= till && it!=mp.end()-1){
                it++;
                ind=(*it).first;
                curr=ind;
            }
            k-=(*it).second;

        }

        if(ma<=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}




















