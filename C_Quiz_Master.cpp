#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double dd;
typedef vector<ll> vll;
typedef pair<ll , ll> ii;
typedef vector< ii > vii;
typedef pair < pair < ll , ll > , pair < ll , ll > > cm; 
typedef tuple < ll,  ll, ll > tp;
 
#define ff first
#define ss second
#define pb push_back
#define in insert
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define f1(b) for(int i=1;i<=(b);i++)
#define f11(b) for(int j=1;j<=(b);j++)
#define f2(a,b) for(int i=(a);i<=(b);i++)
#define f22(a,b) for(int j=(a);j<=(b);j++)
#define sf(a) scanf("%lld",&a)
#define sff(a,b) scanf("%lld %lld", &a , &b)
#define pf(a) printf("%lld\n",a)
#define pff(a,b) printf("%lld %lld\n", a , b)
#define bug printf("**!\n")
#define mem(a , b) memset(a, b ,sizeof(a))
#define front_zero(n) __builtin_clzll(n)
#define back_zero(n) __builtin_ctzll(n)
#define total_one(n) __builtin_popcountll(n)
#define clean fflush(stdout)
 
//const ll mod =  (ll) 998244353;
const ll mod =  (ll) 1e9 + 7;
const ll maxn = (ll)1e8 + 5;
const int nnn = 1048590;
//const int inf = numeric_limits<int>::max()-1;
const int inf = 1e9 + 9;
//const ll INF = numeric_limits<ll>::max()-1;
//const ll INF = (ll)1e18;
 
ll dx[]={0,1,0,-1};
ll dy[]={1,0,-1,0};
ll dxx[]={0,1,0,-1,1,1,-1,-1};
ll dyy[]={1,0,-1,0,1,-1,1,-1};
 
bool USACO = 0;
 
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
 
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
const ll N = 2e5 + 5;
 
ll a[N]; ll last[N], k[N];
 
void solve(){
 
 
    ll n, m; cin >> n >> m;
 
    for(ll i = 1; i <= m; i++) last[i] = 0;
 
    for(int i = 0; i <= n; i++) k[i] = 0;
    k[0] = m; 
 
    ll res = mod;
 
    for(int i = 1; i <= n; i++) cin >> a[i];
 
    sort(a + 1, a + n + 1);
 
    int cur = 0;
    
 
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j * j <= a[i]; j++){
            if(a[i] % j != 0) continue;
            if(j > m ) break;
            ll x = a[i]/j;
            k[last[j]]--;
            last[j] = i;
            k[i]++;
            if(x > m || j * j == a[i]) continue;
            k[last[x]]--;
            last[x] = i;
            k[i]++;
        }
        while(k[cur] == 0) cur++;
        if(cur == 0) continue;
        res = min(res,a[i] - a[cur]);
    }
    if(res == mod) res = -1;
    cout << res << '\n';
    
  return;
}
 
int main() {
    
    
     #ifdef LOCAL
        freopen("in", "r", stdin);
        freopen("out.txt", "w", stdout);
        auto start_time = clock();
    #else 
       ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    #endif
 
    //pre(N);
 
 
 
      ll T = 1, CT = 0; cin >> T;
 
    while(T--){
        solve();
    }
    #ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time - start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
    #endif
 
    return 0;
} 