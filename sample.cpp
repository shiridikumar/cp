#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <numeric>
#include <queue>

typedef unsigned long long int ll;
#define pb push_back
#define pi 3.14159265
#define mod 1000000007
#define MAXN 1000005
using namespace std;



ll getans1(ll base,ll left,ll right){

    ll ct = base;

    ll count1 = 1;
    while(1)
    {
          if(ct*base > left)
          {
              ct = ct*base;
              break;
          }
          else
          {
              ct = ct*base;
              count1++;
          }
    }


    if(right < ct)
    {
        return ((right-left+1)*(count1))%mod;
    }
    else
    {
          return (((count1)*(ct-left))%mod + ((right-ct+1)*(count1+1))%mod)%mod;
    }

}


ll getans(ll num)
{

    if(num <= 3)
    {
        return 0;
    }
    ll power = 4;

    ll ans = 0;
     for(int i = 2;i<=63;i++)
     {
        if(num < power)
        {
            break;
        }

        ans = (ans + getans1(i,power,min(num,power*2-1)))%mod;

        power = power*2;
    
     }


     return ans;
}

void solve(int z)
{
    ll l,r;
    cin>>l>>r;

    ll c1 = getans(r);
    cout<<c1<<endl;
    ll c2 = getans(l-1);
    cout<<c2<<endl;



    cout<<(c1-c2+mod)%mod<<"\n";
  
}

int main()
{
    int t;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    // t = 1;

    for (ll z = 0; z < t; z++)
    {
        solve(z);
    }

    return 0;
}
