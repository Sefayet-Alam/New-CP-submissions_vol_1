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
        ll n;
        cin>>n; vector<ll>a(n),b(n);
        for(ll i=0;i<n;i++){cin>>a[i];} for(ll i=0;i<n;i++){cin>>b[i];}
        if(a[0]<b[0]) {cout<<0<<endl;}
        else{
            map<ll,ll>mp;
            vector<pair<ll,ll>>v;
            for(ll i=0;i<n;i++){
                mp[a[i]]=i;
                v.push_back({b[i],i});
                }
                sort(v.begin(),v.end());
 
                ll minm=INT_MAX;
                for(ll i=v.size()-1;i>=0;i--){
                    minm=min(minm,v[i].second);
                    v[i].second=minm;
                }
            ll ans=INT_MAX;
            ll j=0;
            for(ll i=1;i<=2*n;i+=2){
            ll x=mp[i];
            x+=v[j].second;
            ans = min(ans, x);
            j++;
        }
 
            cout<<ans<<endl;
        }
    }
 
 
 
    return ghost;
}