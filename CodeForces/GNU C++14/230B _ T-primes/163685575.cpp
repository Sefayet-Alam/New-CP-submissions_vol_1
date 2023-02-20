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
const int MOD = 1000000007;
const int MAX = 1000001;
bool prime[MAX];
 
void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;
 
    for (i=4; i<MAX; i+=2)
        prime[i] = true;
 
    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}
 
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
 
    sieve();
    ll t;
    cin>>t;
    //t=1;
 
    while(t--)
    {
  ll n;
  cin>>n;
  ll r=sqrt(n);
   if (!prime[r] && r*r == n)cout<<("YES\n");
        else cout<<("NO\n");
    }
    return ghost;
}