#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main()
{
    fast;
    ll t;
    // setIO();
    ll tno = 1;
    t = 1;
   
    // freopen("dice.in","r",stdin);
     cin >> t;
   
    bool vis[5010];
    ll x[6];
    ll y[6];
    while (t--)
    {
        ll n;
        cin >> n;
        memset(vis,0,sizeof(vis));
        vector<ll> vec(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        vector<ll> a(6, 0), b(6, 0);
        
        a[0] = 1;
        b[0] = vec[0] - 1;
        ll s = 0; // sum

        for (ll i = n - 1; i >= 0; i--)
        {
            vec[i] -= vec[0];
            s += vec[i];
            if(vec[i]>=0) vis[vec[i]] = 1;
        }

        bool f = 0;
        ll sumx = 0;
        ll sumy = 0;
        bool ex = 0;
        if (n == 36)
            ex = 1;

        for (ll i = 2 + (ll)ex; i < min(12LL, n - 8); i++)
        {
           if(!f)
            for (ll j = i + 1;j < n - 7; j++)
            {
                if(!f && !(n == 36 && j < 5)) 
                for (ll k = j + 1; k < n - 6; k++)
                {
                    if(!f && !(n == 36 && k < 8)) 
                    for (ll l = k + 1; l < n - 5; l++)
                    {
                        if(!f)
                        for (ll m = l + 1; m < n - 4; m++)
                        {
                            if(!f)
                            for (ll o = m + 1; o < n - 3; o++)
                            {
                               if(!f){
                               memset(x,0,sizeof(x));
                               memset(y,0,sizeof(y));
                                sumx=0;
                                sumy=0;
                                x[1] = vec[1];
                                y[1] = vec[i] - x[1];
                                x[2] = vec[j] - y[1];
                                if (y[1] > vec[2] && x[2] > vec[2])   continue;
                                  
                                y[2] = vec[k] - x[2];
                                x[3] = vec[l] - y[2];
                                y[3] = vec[m] - x[3];
                                x[4] = vec[o] - y[3];
                                sumx = x[1] + x[2] + x[3] + x[4];
                                sumy = y[1] + y[2] + y[3];
                                if (ex)
                                    y[4] = (s / 6 - sumx - sumy - vec[n - 1]);
                                bool f1 = 1;
                                for (ll i1 = 0; i1 < 5; i1++)
                                {
                                    for (ll j1 = 0; j1 < 4 + (ll)ex; j1++)
                                    {
                                        if (x[i1] < 0 || y[j1] < 0 || !vis[x[i1] + y[j1]])
                                        {
                                            f1 = 0;
                                            break;
                                        }
                                    }
                                   if(!f1) break;
                                }
                                if(!f1) continue;

                                for (ll g = o + 1; g < (ex ? (o + 2) : (n - 2)); g++)
                                {
                                    for (ll h = max(n - 7, g + 1); h < n - 1; h++)
                                    {
                                        if (!ex) y[4] = vec[g] - x[4];

                                        if (y[4] < 0 || !vis[y[4]]) continue;

                                        x[5] = vec[h] - y[4];

                                        if (x[5] < 0 || !vis[x[5]]) continue;

                                        y[5] = vec[n - 1] - x[5];
                                        if (y[5] < 0 || !vis[y[5]]) continue;
                                        set<ll> stt;
                                        for (ll i1 = 0; i1 < 6; i1++)
                                        {
                                            for (ll j1 = 0; j1 < 6; j1++)
                                            {
                                                stt.insert(x[i1] + y[j1]);
                                            }
                                        }
                                        if (stt == set<ll>(vec.begin(), vec.end()))
                                        {
                                            for (ll i2 = 0; i2 < 6; i2++)
                                                a[i2] = a[0] + x[i2];
                                            for (ll i2 = 0; i2 < 6; i2++)
                                                b[i2] = b[0] + y[i2];
                                            f = 1;
                                        }
                                        if(f) break;
                                    }
                                
                                   
                                }
                                }
                                
                               
                            }
                           
                        }
                        
                    }
                   
                }
                
            }
            
        }

        cout << "Case " << tno++ << ":" << endl;
        for (ll i = 0; i < 6; i++)
        {
            cout<<a[i];
            if(i<5) cout<<" ";
        }
        cout << endl;
        for (ll i = 0; i < 6; i++)
        {
          cout<<b[i];
           if(i<5) cout<<" ";
        }

        cout << endl;
    }

    return 0;
}