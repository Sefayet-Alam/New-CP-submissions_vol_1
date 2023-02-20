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
  ll n,m;
  cin>>n>>m;
  ll x;
    vector<ll>v(m+1),workers(n+1,0),freq(n+1,0);
    ll ans=0;
    set<ll>s;
    for(ll i=1;i<=m;i++){
        cin>>v[i];
        freq[v[i]]++;
 
        s.insert(v[i]);
    }
    if(s.size()==m){cout<<1<<endl;}
    else{
        ll l=0,r=INT_MAX;
        ll mid=(l+r)>>1;
        ll w;
        while(l<r){
            m=(l+r)/2;
            ll ans=0;
 
            for(ll i=0;i<n;i++){
            w=freq[i+1];
            if(w>m){ans=ans-(m-w);}
            else{ans-=(m-w)>>1;}
            }
            if(ans>0){l=m+1;}
            else{
                r=m;
            }
        }
        cout<<r<<endl;
    }
    }
    return ghost;
}