#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void build(long long *seg,long long *a,long long ind,long long low,long long high){
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    long long mid=(low+high)/2;
    build(seg,a,2*ind+1,low,mid);
    build(seg,a,2*ind+2,mid+1,high);
    seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}
long long query(long long *seg,long long ind,long long low,long long high,long long l, long long r ){
    if(low>=l and high <=r){
        return seg[ind];
    }
    if(high<l || low>r ){
        return LONG_LONG_MIN;
    }
    long long mid=(low+high)/2;
    long long left=query(seg,2*ind+1,low,mid,l,r);
    long long right=query(seg,2*ind+2,mid+1,high,l,r);
    return max(left,right);
}