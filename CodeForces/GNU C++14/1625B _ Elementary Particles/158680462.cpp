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
    ll t;
    string s;
    cin>>t;
    while(t--)
    {
       ll n ,l;
       cin>>n;
       map<ll,vector<ll>>mpp;
       vector<ll>v(n);
       for(ll i=0;i<n;i++) {cin>>v[i];
       mpp[v[i]].push_back(i);
       }
 
       ll ans=-1;
    ll a=0,b=0;
        for(auto it:mpp)
        {
            for(ll i=0;i<it.second.size()-1;i++)
            {
                ll j=i+1;
                    a=min(it.second[i],it.second[j]);
                    b=min((n-1-it.second[i]),(n-1-it.second[j]));
                    ans=max((ll)(a+b+1),ans);
            }
        }
        cout<<ans<<"\n";
 
    }
 
    return ghost;
}
 