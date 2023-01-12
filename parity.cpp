const int mod = 1e9 + 7;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
    int res = 0;
    for (int i = a + 1; i <= b; i++) {
        int sumEven = 0, sumOdd = 0;
        int n = i;
        int j = 0;
        while (n > 0) {
            if (j % 2 == 0) sumEven += n % 10;
            else sumOdd += n % 10;
            n /= 10;
            j++;
        }
        if ((sumEven % 2) == (sumOdd % 2)) res = (res + 1) % mod;
    }
    return res;
}


int main(){
    int a,b;
    cin>>a>>b;
    int ans=solve(a,b);
    cout<<ans<<endl;
}
