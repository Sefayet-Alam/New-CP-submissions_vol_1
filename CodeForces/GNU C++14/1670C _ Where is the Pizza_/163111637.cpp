#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
const int N=1e5+7, mod=1e9+7;
int par[N], sz[N];
bool flag[N];
int FIND(int u)
{
    if(par[u]==u){ return u; }
    return par[u]=FIND(par[u]);
}
void UNION(int u, int v)
{
    u=FIND(u), v=FIND(v);
    if(u==v){ return; }
    if(sz[u]<sz[v]){ swap(u,v); }
    par[v]=u;
    sz[u]+=sz[v];
    flag[u]|=flag[v];
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        par[i]=i; sz[i]=1; flag[i]=0;
    }
    vector<int>a(n), b(n), d(n);
    for(int i=0; i<n; i++){ cin>>a[i]; }
    for(int i=0; i<n; i++){ cin>>b[i]; }
    for(int i=0; i<n; i++)
    {
        cin>>d[i];
        if(d[i]){ flag[FIND(d[i])]=1; }
        UNION(a[i],b[i]);
    }
    ll ans=1;
    for(int i=1; i<=n; i++)
    {
        if(FIND(i)==i && sz[i]>1 && !flag[i])
        {
            ans<<=1;
            ans%=mod;
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    fast;
    int tc;
    cin>>tc;
    while(tc--) solve();
    return 0;
}