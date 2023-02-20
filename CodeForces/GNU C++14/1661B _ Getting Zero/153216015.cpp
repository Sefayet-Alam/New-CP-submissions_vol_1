#include <bits/stdc++.h>
#define ll long long
 
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
vector<ll>newa(32769);
void ghost()
{
    ll mx=0;
    for(ll i=1; i<=32768; i++)
    {
        ll r=i, cnt=0;
        while(r%32768)
        {
            r*=2; cnt++;
        }
        newa[i]=cnt;
    }
}
 
int main()
{
    fast;
 
    ghost();
    ll n;
    cin>>n;
    vector<ll>v(n), a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        a[i]=20;
        ll f=1;
        while(f<v[i]){ f*=2; }
        for(ll j=v[i]; j<=f; j++)
        {
            ll y=j-v[i], cnt=0, w=j;
            a[i]=min(a[i],newa[j]+y);
        }
    }
    for(auto it:a){ cout<<it<<" "; }
    cout<<"\n";
    return 0;
}