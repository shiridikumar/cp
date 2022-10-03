// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    double med(vector<int>& array1,int s1,int e1 ,vector<int>&array2,int s2,int e2){
        int tot=(e1+e2+1)/2;
        int low=0;
        int high=array1.size();
        int c1;
        int c2;
        while(low<=high){
            int c1=(low+high)/2;
            int c2=tot-c1;
            int l1=(c1==0)?INT_MIN:array1[c1-1];
            int l2=(c2==0)?INT_MIN:array2[c2-1];
            
            int r1=(c1==e1)?INT_MAX:array1[c1];
            int r2=(c2==e2)?INT_MAX:array2[c2];
            
            if(l1>r2){
                high=c1-1;
            }
            else if(l2>r1){
                low=c1+1;
            }
            else{
                if((e1+e2)%2==0){
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else{
                    return max(l1,l2);
                }
                break;
                
            }
        }
        return 0.0;
        
        // cout<<l1<<" "<<l2<<" "<<r1<<" "<<r2<<endl;
    
        
        
        
}
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        double ans;
        if(array1.size()<array2.size()){
            return med(array1,0,array1.size(),array2,0,array2.size());
        }
        
        
            return med(array2,0,array2.size(),array1,0,array1.size());
            
        
        // return ans;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends


  // https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1/#