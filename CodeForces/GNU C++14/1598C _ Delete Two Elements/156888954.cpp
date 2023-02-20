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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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
    cin>>t;
    while(t--)
    {
 
        ll n;
        cin>>n;
 
        ll sum = 0;
        vector<ll>a(n + 1);
 
        for (int i = 1;i<=n;i++){
            cin>>a[i];
            sum += a[i];
        }
 
        //find the number of pairs (i,j) such that a[i] + a[j] == 2 * sum / n
        ll req = 2 * sum / n;
        map<ll,ll>cnt;
        ll ans = 0;
 
        if ((sum - req) * n != sum * (n - 2)){
            cout<<0<<'\n';
            continue;
        }
 
        for (int i = 1;i<=n;i++){
            ans += cnt[req - a[i]];
            cnt[a[i]]++;
        }
 
        cout<<ans<<'\n';
    }
 
    return ghost;
}