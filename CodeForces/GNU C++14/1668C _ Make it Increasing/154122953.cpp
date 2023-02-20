#include <bits/stdc++.h>
#define ll long long
 
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1000000007;
 
int main()
{
    fast;
    ll n, c;
    cin>>n;
    vector<ll>a(n), b(n,0);
    for(ll k=0; k<n; k++){ cin>>a[k]; }
    ll ans=1e18;
    for(ll f=0;f<n;f++)
    {
    b[f]=0, c=0;
    for(ll k=f-1; k>=0; k--)
    {
    if(a[k]>=b[k+1])
    {
    ll s=-a[k];
    ll t=(abs(b[k+1])/a[k])+1;
    c+=t;
    b[k]=s*t;
    }
   }
    for(ll k=f+1; k<n; k++)
    {
    if(a[k]<=b[k-1])
    {
    ll s=a[k], t=(b[k-1]/a[k])+1;
    c+=t;
    b[k]=s*t;
    }
    else
        {
        b[k]=a[k]; c++;
        }
    }
        ans=min(ans,c);
    }
    cout<<ans<<"\n";
 
 
 
    return  0;
}