#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll b,p,m;
const ll md = 1000000007;
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
map<string,string> mp;
ll pow1(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll x = pow1(n, p / 2);
    x = (x * x)%m;
    if (p%2==0)
        return x;
    else
        return (x*n)%m;
}
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
 
    //cin>>t;
    t=1;
    while(t--)
    {
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    ll x;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(k>=n) {
        cout<<2*(v[n-1]-1)<<endl;
 
    }
    else{
    ll ans = 0;
    ll j=n-1;
    int s=n/k;
    while(s--) {
        ans=ans+2*(v[j]-1);
        j -= k;
 
    }
    s=n%k;
    if(s) {
        ans=ans+2*(v[j]-1);
    }
    cout<<ans<<endl;
 
 
    }
 
    }
 
    return ghost;
}
 