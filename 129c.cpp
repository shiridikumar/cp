#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long  long test;
    cin >> test;
    for (long  long t = 0; t < test; t++)
    {
        long  long n;
        cin >> n;
        long  long a[n], b[n];
        for (long  long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long  long i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long  long p = 0;
        long  long index, temp = 0, flag = 0, count = 0,br=0;
        vector<pair<long  long ,long  long> > moves;
        for (p = 1; p < n; p++)
        {
            flag = 0;
            long  long ind = p - 1;
            // cout<<p<<"---------------"<<" test case "<<t+1<<a[p]<<"|||"<<a[ind]<<endl;
            while ((a[ind] > a[p] || b[ind]>b[p] ) && ind >= 0)
            {
                if(b[ind]<b[p] || a[ind]<a[p]){
                    br=1;
                    // cout<<"** test case "<<t+1<<b[ind]<<" "<<b[p]<<endl;
                    break;
                }
                // cout<<p<<"   test case  "<<t+1<<"  "<<ind<<endl;
                index = ind;
                temp = a[index];
                a[index] = a[p];
                a[p] = temp;
                count += 1;
                temp=b[index];
                b[index]=b[p];
                b[p]=temp;
                moves.push_back(make_pair(index,p));
                ind--;
                p--;
                flag = 1;
            }
            if(br==1){
                break;
            }
            if(count>10000){
                br=1;
                break;
            }
        }
        if(br==1){
            cout<<-1<<" "<<endl;
        }
        else{
            // cout<<"test case --- "<<t+1<<endl;
            cout<<count<<endl;
            for(auto it=moves.begin();it!=moves.end();it++ ){
                cout<<(*it).first+1<<" "<<(*it).second+1<<endl;
            }
        } 
        moves.clear();
    }
}