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
 
void solve(){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    ll v1=0,v2=0;
    for(int i=0;i<n;i+=2) v1 = __gcd(v1,a[i]);
    for(int i=1;i<n;i+=2) v2 = __gcd(v2,a[i]);
 
    bool ok = true;
    for(int i=0;i<n;i+=2){
        if(a[i]%v2==0){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<v2<<"\n";
        return;
    }
 
    ok = true;
    for(int i=1;i<n;i+=2){
        if(a[i]%v1==0){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<v1<<"\n";
        return;
    }
 
    cout<<0<<"\n";
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
    solve();
    }
 
    return ghost;
}