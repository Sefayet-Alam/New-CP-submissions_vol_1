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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),occ(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll powers[100];
    powers[0] = 1;
    ll ans=0;
    for (int i = 1;i<=9;i++)powers[i] = (powers[i - 1] * 10);
    for (int i = 0;i<n;i++){
            if (k < 0)break;//then we are done
            //occ[i] = min(k + 1,10^a[i + 1] / 10^a[i] - 1)
            occ[i] = k + 1;
            if (i != n - 1)//if i == n - 1 => a[i + 1] is not defined
                occ[i] = min(occ[i],powers[a[i + 1]]/powers[a[i]] - 1);
 
            k -= occ[i];
            ans += occ[i] * powers[a[i]];
        }
     cout<<ans<<endl;
 
     }
 
 
 
 
 
 
    return ghost;
}
 