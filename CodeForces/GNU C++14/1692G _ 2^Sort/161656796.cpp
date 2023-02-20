#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
const ll md = 1000000007;
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
 
ll pow1(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll x = pow1(n, p / 2);
    x = (x * x) % md;
    if (p % 2 == 0)
        return x;
    else
        return (x * n) % md;
}
 
 
int main()
{
    fast;
    //setIO();
 
    string s;
    ll t;
    cin>>t;
    //t=1;
    while(t--)
    {
       int n, k;
    cin>>n>>k;
    vector<ll>vec(n);
    for(int i=0; i<n; i++){ cin>>vec[i]; }
    vector<bool>check(n,0);
    for(int i=1; i<n; i++)
    {
        if(vec[i]*2>vec[i-1]){ check[i]=1; }
    }
    //for(auto it:check){ cout<<it<<" "; }
    //cout<<"\n";
    int cnt=0, ans=0;
    for(int i=0; i<n; i++)
    {
        if(check[i]==0){ ans+=max(0,cnt+1-k); cnt=0; }
        else{ cnt++; }
    }
    ans+=max(0,cnt+1-k);
    cout<<ans<<"\n";
    }
 
 
 
    return ghost;
}