#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
};

void insert(int val1, Node *head)
{
    Node *curr=head;
    for(int i=30;i>=0;i--){
        int val=((val1>>i)&1);
        if(val){
            if(!(curr->right)){
                curr->right=new Node();
            }
            curr=curr->right;
        }
        else{
            if(!(curr->left)){
                curr->left=new Node();
            }
            curr=curr->left;
        }
    }
}

int getmax(int val1, Node *head)
{
    int currxor = 0;
    int ind = 0;
    Node *curr=head;

    for(int i=30;i>=0;i--){
        int val=(val1>>i)&1;

        if(val==1){
            if(curr->left){
                currxor+=(1<<i);
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
        else{
            if(curr->right){
                currxor+=(1<<i);
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
        }
        // cout<<i<<" "<<currxor<<" "<<val<<" "<<endl;
    }
    return currxor;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int x = 0;
    Node *head = new Node();
    insert(0,head);
    // cout<<0<<" ";
    vector<int> prefixes;
    prefixes.push_back(0);
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];

        x=x^a[i];
        // cout<<x<<" ";
        prefixes.push_back(x);
        insert(x, head);
    }
    // cout<<endl;
    int ma=0;
    int req=0;
    for (int i = 0; i < n; i++)
    {
        ma=getmax(i,head);
        if(ma==n-1){
            req=i;
            break;
        }
        // cout<<ma<<" "<<i<<endl;

    }
    // cout<<req<<" ";
    for(int i=0;i<n;i++){
        cout<<(prefixes[i]^req)<<" ";
    }
    cout<<endl;
}

// 010
// 111