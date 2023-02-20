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
    //cin>>t;
    t=1;
    while(t--)
    {
    ll n,sum=0;
    cin>>n;
    vector<ll> v(n),a(n),counts(n);
    for(ll i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            counts[i]=sum;
    }
    int ind=0, worms[sum + 1];
    for (int i = 1; i <= sum; i++)
    {
        if (i > counts[ind])
            ind++;
        worms[i] = ind + 1;
    }
    ll m;
    cin>>m;
    ll x;
    for(ll i=0;i<m;i++){
        cin>>x;
        cout<<worms[x]<<endl;
    }
    }
 
    return ghost;
}
 
 