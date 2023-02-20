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
 
 
int a[105][105];
int main()
{
    fast;
    //setIO();
 
 
    ll t;
    cin>>t;
    //t=1;
 
    while(t--)
    {
   ll n;
   cin>>n;
   vector<bool>vis(n+1,0);
   ll d=2;
    vector<ll> v;
 
 
   ll x=1;
   cout<<d<<endl;
   for(ll j=1;j<=n;j++){
   for(ll i=j;i<=n;){
    if(!vis[i]){v.push_back(i);
    vis[i]=1;}
    i=i*d;
    }
   }
 
   for(ll i=0;i<n;i++){
   cout<<v[i]<<" ";
 
   }
   cout<<endl;
    }
    return ghost;
}
 