#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        cin>>n;
        long long a[n];
        long long ma=LONG_LONG_MIN;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            ma=max(ma,a[i]);
        }
        long long l=0,r=n-1;
        while(l<n && a[l]<0){
            l++;
        }
        while(r>=0 && a[r]<0){
            r--;
        }
        if(l==n){
            cout<<ma<<endl;
        }
        else{
            vector<long long> even;
            vector<long long> odd;
            long long nego=0;
            long long nege=0;
            long long maxe=LONG_LONG_MIN;
            long long maxo=LONG_LONG_MIN;
            for(long long i=l;i<=r;i++){
                if(i%2==0){
                    even.push_back(a[i]);
                    if(a[i]<0){
                        nege+=1;
                        maxe=max(maxe,a[i]);
                    }
                }
                else{
                    odd.push_back(a[i]);
                    if(a[i]<0){
                        nego+=1;
                        maxo=max(maxo,a[i]);
                    }
                }
            }
            long long oddsum=0;
            long long mo=LONG_LONG_MIN;
            long long flag=0;
            for(long long i=0;i<odd.size();i++){
                if(oddsum+odd[i]<oddsum){
                    oddsum=oddsum;
                }
                else{
                    oddsum+=odd[i];
                    flag=1;
                }
                mo=max(mo,oddsum);
            }
            if(flag==0){
                mo=maxo;
            }
            flag=0;
            long long evensum=0;
            long long me=LONG_LONG_MIN;
            for(long long i=0;i<even.size();i++){
                if(evensum+even[i]<evensum){
                    evensum=evensum;
                }
                else{
                   
                    evensum+=even[i];
                    //  cout<<a[i]<<"***"<<endl;
                    flag=1;
                }
                me=max(me,evensum);
            }
            if(flag==0){
                me=maxe;
            }
            cout<<max(me,mo)<<endl;
        }



    }
}