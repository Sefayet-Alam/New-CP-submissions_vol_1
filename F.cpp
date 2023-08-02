#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pb                  push_back
#define ll                  long long

// using T = __int128;
// ax + by = __gcd(a, b)
// returns __gcd(a, b)
ll extended_euclid(ll a, ll b, ll &x, ll &y) {
    ll xx = y = 0;
    ll yy = x = 1;
    while (b) {
        ll q = a / b;
        ll t = b; b = a % b; a = t;
        t = xx; xx = x - q * xx; x = t;
        t = yy; yy = y - q * yy; y = t;
    }
    return a;
}
int main()
{
    
    ll a,b;
    while(cin>>a>>b){
      ll x,y;
      ll g=extended_euclid(a,b,x,y);
      cout<<x<<" "<<y<<" "<<g<<endl;
    }


    return 0;
}

