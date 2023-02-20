 
#include <bits/stdc++.h>
#define ll long long
 
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
ll cnt=0;
void ghost(ll r,ll s)
{
    if(s==0){return;}
    else if(r>=s) {cnt++;return;}
    else{cnt++;ghost(2*r,s-r);}
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cnt=0;
        vector<ll> v(n);
        map<ll,ll> mp;
        ll x;
 
        ll maxm=1;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v[i]=x;
            mp[x]++;
            maxm=max(maxm,mp[x]);
        }
        ll ans=n-maxm;
        ghost(maxm,ans);
        cout<<ans+cnt<<endl;
    }
    return 0;
}