#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
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
map<string,string> mp;
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
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t,q,n;
 
    cin>>t;
    while(t--)
    {
       cin>>n;
 
       vector<vector<ll>>v(n+3,vector<ll>(n+1,0));
       ll s;
       ll freq[n+1][n+1],ans=0;
       for(ll j=1;j<=n;j++){cin>>v[0][j];}
 
       for(ll i=1;i<=n+2;i++){
         vector<ll>cnt(n+1,0);
         for(ll j=1;j<=n;j++){
         cnt[v[i-1][j]]++;}
          for(ll j=1;j<=n;j++){
         v[i][j]=cnt[v[i-1][j]];}
         }
       cin>>q;
       while(q--)
       {
           ll x,k;
           cin>>x>>k;
           if(k>n+2){k=n+1;}
 
           cout<<v[k][x]<<endl;
       }
 
    }
 
    return ghost;
}