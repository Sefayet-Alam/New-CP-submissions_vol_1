#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        map<ll, vector<ll>> map;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (map.find(a) == map.end())
            {
                map[a] = vector<ll>();
            }
            map[a].push_back(i);
        }
        ll ans = 0;
        for (auto it = map.begin(); it != map.end(); ++it)
        {
            vector<ll> list = it->second;
            ll m = list.size();
            ll sum[m];
            sum[0] = list[0] + 1;
            for (ll i = 1; i < m; i++)
            {
                sum[i] = sum[i - 1] + list[i] + 1;
            }
 
            for (int i = 1; i < m; i++)
            {
                long after = (n - list[i]);
                ans += after * sum[i - 1];
            }
        }
        cout << ans << endl;
    }
    return ghost;
}