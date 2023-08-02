#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;



#define ll long long
const ll N=2e5+10;

ll n, m, w;
vector<ll> h(N);

ll func(ll x)
{
    return (x * (x - 1)) / 2;
}
int main()
{
   
    ll t;
    // setIO();
    ll tno = 1;
    ;
    t = 1;
    cin >> t;

    while (t--)
    {
        cin >> n >> m >> w;
        h.resize(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        ll l, r;
        vector<pair<ll, ll>> intervals;
        set<ll> endpoint_set;
        ll P, J;
        for (ll i = 0; i < m; i++)
        {
            cin >> P >> J;
            l = P - 1, r = P - 1;
            while (l > 0 && h[l] + J > w)
            {
                l--;
            }
            while (r + 1 < n && h[r] + J > w)
            {
                r++;
            }
            intervals.push_back({l, r});
            endpoint_set.insert(l);
            endpoint_set.insert(r);
        }
        map<ll, ll> lookup;
        ll indx = 1;
        for (auto it : endpoint_set)
        {
            lookup[it] = indx++;
        }
        // compression
        for (ll i = 0; i < intervals.size(); i++)
        {
            intervals[i].first = lookup[intervals[i].first];
            intervals[i].second = lookup[intervals[i].second];
        }
        ll sz = endpoint_set.size();
        ll dp[sz + 2][sz + 2];
        memset(dp, 0,sizeof(dp));
        for (ll l = 0; l < sz; l++)
        {
            for (ll i = 0; i < sz - l + 1; i++)
            {
                ll j = i + l;
                vector<ll> C(j + 2, 0);
                for (auto it : intervals)
                {
                    if (i <= it.first && it.second <= j)
                    {
                        C[it.first - i] += 1;
                        C[it.second + 1 - i] -= 1;
                    }
                }
                for (ll m = i; m <= j; ++m)
                {
                    dp[i][j] = max(dp[i][j], dp[i][m - 1] + func(C[m - i]) + dp[m + 1][j]);
                    C[m + 1 - i] += C[m - i];
                }
            }
        }
        cout << "Case "
             << "#" << tno++ << ": " << dp[1][sz] << endl;
    }

    return 0;
}
