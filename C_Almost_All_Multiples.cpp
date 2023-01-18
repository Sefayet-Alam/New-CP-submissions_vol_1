#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define scl(n) scanf("%lld", &n)
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define pfl(x) printf("%lld\n", x)
#define pb push_back
#define asort(a) sort(a, a + n)
#define dsort(a) sort(a, a + n, greater<int>())
#define vasort(v) sort(v.begin(), v.end());
#define vdsort(v) sort(v.begin(), v.end(), greater<ll>());
#define pn printf("\n")
#define md 10000007
#define debug printf("I am here\n")

#define l(s) s.size()
#define tcas(i, t) for (ll i = 1; i <= t; i++)
#define pcas(i) printf("Case %lld: ", i)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define M 10000

void setIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int main()
{
    fast;
    ll t;
    // setIO();
    // ll tno=1;;
    // t=1;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> vec(n + 100);

        if (x == n)
        {
            for (ll i = 1; i <= n; i++)
            {
                vec[i] = i;
            }
            vec[1] = x;
            vec[n] = 1;

            for (ll i = 1; i <= n; i++)
            {
                cout << vec[i] << " ";
            }
            cout << endl;
        }
        else
        {
            if (n % x != 0)
            {
                cout << -1 << endl;
            }
            else
            {

                for (ll i = 1; i <= n; i++)
                {
                    vec[i] = i;
                }
                ll nodiv = 0;
                vector<ll> divs;
                for (ll i = 2; i < n; i++)
                {
                    if (n % i == 0)
                    {
                        divs.push_back(i);
                    }
                }
                ll m = divs.size();
                vec[1] = x;
                vec[n]= 1;
                vec[x]=n;
                // for(auto it:divs){
                //     cout<<it<<" ";
                // }
                // cout<<endl;
                for (ll i = 0; i < m ; i++)
                {
                    if (divs[i] == x)
                    {
                        for (ll j = i+1; j < m; j++)
                        {
                          // cout<<divs[j]<<" "<<divs[j+1]<<endl;
                            if((divs[j])% (divs[i])==0){
                                //cout<<1<<endl;
                                swap(vec[divs[j]], vec[divs[i]]);
                                i=j;
                               
                            }
                        }
                        break;
                    }
                }

                for(ll i=1;i<=n;i++){
                    cout<<vec[i]<<" ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
