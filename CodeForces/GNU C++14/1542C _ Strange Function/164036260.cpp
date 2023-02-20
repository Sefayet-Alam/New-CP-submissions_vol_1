#include<bits/stdc++.h>
 
using namespace std;
 
 
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl              "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
 
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
#define M 10000
const int MOD = 1e9 + 7;
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
     ll t;
 
     //ll tno=1;;
     //t=1;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        ll  lcm = 1;
        ll  remain = n;
        ll  ans = 0;
 
        for (ll  i = 2; ; i++) {
            ll  bef = n / lcm;
            lcm = lcm * i / __gcd(lcm, i);
            ll aft = n / lcm;
 
            ans += (bef - aft) * i;
            ans %= MOD;
 
            if(lcm > n) break;
        }
 
        cout << ans << '\n';
 
  }
 
    return 0;
}
 