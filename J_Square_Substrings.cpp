#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// VVI
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define ll long long
#define ff first
#define ss second
#define SZ(a) (int)a.size()
#define UNIQUE(a) (a).erase(unique(all(a)), (a).end())
#define eb emplace_back
#define mp make_pair

// CONSTANTS
#define PI 3.1415926535897932384626
const double EPS = 1e-9;
const ll N = 1e7 + 10;
const ll M = 1e9 + 7; // mod value

// all arrays
const ll MAXN = 16 * 16 + 1;
ll FM[MAXN + 100];  // factorial value store
ll iFM[MAXN + 100]; // inverse factorials store
ll inv[MAXN + 100]; // mod inverse value store
int is_initialized = 0;

ll w1[MAXN][MAXN];

ll powerMod(ll x, ll y, ll p)
{
    ll res = 1 % p;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

ll inverseMod(ll a, ll x)
{
    return powerMod(a, x - 2, x);
}

void factorialStore()
{
    inv[1] = 1;
    for (ll i = 2; i < MAXN; i++)
    {
        inv[i] = (M - M / i) * inv[M % i] % M;
    }
    FM[0] = 1;
    iFM[0] = 1;
    for (ll i = 1; i < MAXN; i++)
    {
        FM[i] = (FM[i - 1] * i) % M;
        iFM[i] = iFM[i - 1] * inv[i] % M;
    }
}

ll func(vector<ll> freq, ll special)
{
    ll d = accumulate(freq.begin(), freq.end(), 0);
    ll b = *max_element(freq.begin(), freq.end());
    if (d == 0)
        return 1;
    if (d == freq[special])
        return 0;
    if (b + b - 1 > d)
        return 0;
    vector<ll> dp(1);
    dp[0]=1;

    for (ll j = 0; j < freq.size(); j++)
    {
        if (freq[j] == 0 || j == special)
            continue;
        vector<ll> nxt(dp.size() + freq[j]);
        for (ll pgr = 0; pgr < dp.size(); pgr++)
        {
            for (ll cgr = 1; cgr <= freq[j]; cgr++)
            {
                nxt[pgr + cgr] = (nxt[pgr + cgr] + 1LL * dp[pgr] * w1[freq[j]][cgr] % M * iFM[cgr] % M) % M;
            }
        }
        dp = nxt;
    }

    ll res = 0;
    for (ll i = 0; i < dp.size(); i++)
    {
        if (freq[special] == 0)
        {
            ll x = 1LL * dp[i] * FM[i] % M;
            if ((d - i) % 2 == 0)
                res += x;
            else
                res -= x;
            if (res >= M)
                res -= M;
            if (res < 0)
                res += M;
        }
        else
        {
            for (ll j = 1; j <= freq[special]; j++)
            {
                ll x = 1L * dp[i] * w1[freq[special]][j] % M * iFM[j] % M;
                x = x * FM[i + j - 1] % M * i % M;

                if ((d - i - j) % 2 == 0)
                    res += x;
                else
                    res -= x;
                if (res >= M)
                    res -= M;
                if (res < 0)
                    res += M;
            }
        }
    }
    return res;
}

int main()
{
    fast;
    ll t;
    // setIO();
    // ll tno=1;;
    t = 1;
    // cin>>t;

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // factorial store-precalc
    factorialStore();

    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
  
    vector<ll> x(sum);
    for (ll i = 0; i < sum; i++)
    {
        cin >> x[i];
      
    }

    for(ll i=0;i<sum;i++){
        x[i]--;
    }

    w1[0][0] = 1;
    for (ll i = 1; i < MAXN; i++)
    {
        for (ll j = 1; j < MAXN; j++)
        {
            for (ll k = 1; k <= i; k++)
            {
               w1[i][j] += w1[i - k][j - 1];
               if (w1[i][j] >= M) w1[i][j] -= M;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < sum; i++)
    {
        for (ll j = 0; j < x[i]; j++)
        {
            if (i > 0 && j == x[i - 1])
                continue;
            if (arr[j] > 0)
            {
                arr[j]--;
                ll w = func(arr, j);
                ans += w;
                if (ans >= M) ans -= M;
                arr[j]++;
            }
        }
          arr[x[i]]--;
    }

    cout << (ans + 1) % M << endl;

    return 0;
}
