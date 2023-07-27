#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long binary_search(long long init,long long l,long long h,int act){
    cout<<l<<" "<<h<<" "<<h*init<<endl;
    if(l>=h ){
        return l;
    }

    long long mid=(h+l)/2;
    if((act-mid*4)*(init+20*mid)> h*4*init) && (act-mid*4)*(init+20*mid)> l*4*init))
    if((act-mid*4)*(init+20*mid)> h*4*init){
        cout<<(act-mid*4)*(init+20*mid)<<" "<<h*4*init<<" --> "<<mid*4<<endl;
        return binary_search(init ,l,mid,act);
    }
    else{
        cout<<(act-mid*4)*(init+20*mid)<<" "<<h*4*init<<" --> "<<mid*4<<endl;
        return binary_search(init, mid+1,h,act);
    }


}
int main(){
    long long test;
    cin>>test;
    for(long long tes=0;tes<test;tes++){
        long long n;
        long long s,k;
        cin>>s>>k;
        string temp=to_string(s);
        long long last= temp[temp.size()-1]-'0';
        long long cycle_pref[]={2,6,14,20};
        // cout<<k*s<<endl;

        long long init=s+last;
        cout<<init<<"****"<<endl;
        int dup=init;
        for(int i=1;i<=k;i+=4){
            cout<<(k-i)*dup<<" -- > "<<k-i<<endl;
            dup+=20;

        }
        cout<<endl;
        long long ma=binary_search(init,0,(k/4),(k-2));
        // k-=1;
        cout<<ma<<endl;
        k=ma;
        long long ind=0;
        long long count=0;
        while(k>0 && count<20){
            cout<<k*(init+cycle_pref[ind])<<endl;
            init+=cycle_pref[ind];
            k-=1;
            ind+=1;
            count+=1;
            if(ind%4==0)
            {
                ind=0;
            }
        }



    }
}