#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long seg[4*200005];
void build(long long *a,long long ind,long long low,long long high){
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    long long mid=(low+high)/2;
    build(a,2*ind+1,low,mid);
    build(a,2*ind+2,mid+1,high);
    seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}
int query(int ind,int low,int high,int l, int r ){
    if(low==l and high ==r){
        return seg[ind];
    }
    if(high<l || low>r ){
        return -1;
    }
    int mid=(low+high)/2;
    long long left=query(2*ind+1,low,mid,l,min(r,mid));
    long long right=query(2*ind+2,mid+1,high,max(l,mid+1),r);
    return max(left,right);
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(0);
    long long n, m;
    cin >> n >> m;
    long long a[m];
    for (long long i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    long long q;
    cin >> q;

    long long seg[4*m];
    build(a,0,0,m-1);
    long long ma=LONG_LONG_MIN;
    
    for (long long il = 0; il < q; il++)
    {
        long long x1, x2, y1, y2, k;
        long long flag = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> k;
        long long ma = LONG_LONG_MIN;
        long long m1=min(x1,x2);long long m2=max(x1,x2);
        long long my1=min(y1-1,y2-1);long long my2=max(y1-1,y2-1);

        if ((m2-m1) % k != 0 || (my2-my1)%k!=0)
        {
            cout << "NO\n";
        }
        else
        {
            
            ma=query(0,0,m-1,my1,my2);

            long long hi=(n-m2)/k;
            long long top=m2+k*hi;
            if(top<=ma){
                cout<<"NO\n";
            }
            else{
                
                cout<<"YES\n";
            }
            
           
        }
    }
}
