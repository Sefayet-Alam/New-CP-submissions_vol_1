#include <bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
#define ll long long
const ll mod = 1e9 + 7,inf = 1e18;
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
int main()
{
    fast;
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll hc,dc;
        cin>>hc>>dc;
        ll hm,dm;
        cin>>hm>>dm;
        ll k,AI,HI;
        cin>>k>>AI>>HI;
 
        bool possible=false;
 
        for(ll i=0;i<=k;i++){
            ll __hc=hc+(i*HI);
            ll __dc=dc+((k-i)*AI);
            ll x=(hm+__dc-1)/__dc;
            ll y=(__hc+dm-1)/dm;
             if(x<=y)
            {
                possible=true;
                break;
            }
        }
 
        (possible)? cout<<"YES\n":cout<<"NO\n";
 
    }
 
 
}