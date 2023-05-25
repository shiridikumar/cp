#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int tes=0;tes<test;tes++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=a;
        int swap=2*a;
        int last=0;
        int init=a;
        if(a==0){
            cout<<1<<endl;
        }
        else{
            int res=0;
            res+=2*min(b,c);
            int mi=min(b,c);
            b-=mi;c-=mi;
            int bob=a;
            int al=a;
            if(b>0){
                int dec= min(b,bob);
                b-=dec;
                res+=dec;
                al+=dec;
                bob-=dec;
            }
            if(c>0){
                int dec=min(c,al);
                c-=dec;
                res+=dec;
                bob+=dec;
                al-=dec;
            }

            int fin=min(d,min(al,bob));
            d-=fin;
            res+=fin;
            al-=fin;
            bob-=fin;

            int last=min(min(al+1,bob+1),max(max(b,c),d));
            cout<<res+last+a<<endl;
        }
    }
}


// 1 0 0 0
// 0 1 0 0
// 0 0 1 0
// 0 0 0 1
// 2 0 0 0
// 1 1 0 0
// 1 0 1 0
// 1 0 0 1
// 0 2 0 0
// 0 1 1 0
// 0 1 0 1
// 0 0 2 0
// 0 0 1 1
// 0 0 0 2
// 3 0 0 0
// 2 1 0 0
// 2 0 1 0
// 2 0 0 1
// 1 2 0 0
// 1 1 1 0
// 1 1 0 1
// 1 0 2 0
// 1 0 1 1
// 1 0 0 2
// 0 3 0 0
// 0 2 1 0
// 0 2 0 1
// 0 1 2 0
// 0 1 1 1
// 0 1 0 2
// 0 0 3 0
// 0 0 2 1
// 0 0 1 2
// 0 0 0 3
// 4 0 0 0
// 3 1 0 0
// 3 0 1 0
// 3 0 0 1
// 2 2 0 0
// 2 1 1 0
// 2 1 0 1
// 2 0 2 0
// 2 0 1 1
// 2 0 0 2
// 1 3 0 0
// 1 2 1 0
// 1 2 0 1
// 1 1 2 0
// 1 1 1 1
// 1 1 0 2
// 1 0 3 0
// 1 0 2 1
// 1 0 1 2
// 1 0 0 3
// 0 4 0 0
// 0 3 1 0