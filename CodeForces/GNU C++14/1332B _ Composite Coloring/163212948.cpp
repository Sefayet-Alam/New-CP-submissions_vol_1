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
 
    string s;
    ll t;
    cin>>t;
    //t=1;
    ll primes[11] = {2,3,5,7,11,13,17,19,23,29,31};
    while(t--)
    {
    ll n;
    cin>>n;
    vector<ll>vis(12,0);
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
            for (ll j=0; j<11; j++)
            {
                if(v[i]%primes[j]==0)
                {
                    v[i] = j+1;
                    vis[j+1] = 1;
                    break;
                }
            }
    }
    ll p=0;
    ll j;
    for (ll i=1;i<=11;i++)
        {
            if(!vis[i])
            {
                for(j=i+1; j<=11; j++)
                {
                    if(vis[j])
                    {
                        vis[j] = 0;
                        break;
                    }
                }
 
                for (ll k=0;k<n;k++)
                {
                    if (v[k]==j)
                    {
                        v[k]=i;
                        vis[i]=1;
                    }
                }
 
            if (vis[i]) p=max(p,i);
            }
            else
                p=max(p,i);
        }
 
        cout<<p<<" ";
 
        for (ll i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
 
            if(i==n-1)
                cout<<("\n");
            else
                cout<<(" ");
        }
    }
 
 
 
 
 
 
    return ghost;
}
 