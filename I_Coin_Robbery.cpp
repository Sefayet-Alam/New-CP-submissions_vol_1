#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long

const int INF = 1000000000;
 
struct Edge {
    int a, b, cap, flow;
};
 
struct MaxFlow {
    int n, s, t;
    vector<int> d, ptr, q;
    vector< Edge > e;
    vector< vector<int> > g;
 
    MaxFlow(int n) : n(n), d(n), ptr(n), g(n), q(n) {
        e.clear();
         for(int i=0,_a=(n);i<_a;i++){
            g[i].clear();
            ptr[i] = 0;
        }
    }
 
    void addEdge(int a, int b, int cap) {
        Edge e1 = { a, b, cap, 0 };
        Edge e2 = { b, a, 0, 0 };
        g[a].push_back( (int) e.size() );
        e.push_back(e1);
        g[b].push_back( (int) e.size() );
        e.push_back(e2);
    }
    int getMaxFlow(int _s, int _t) {
        s = _s; t = _t;
        int flow = 0;
        for (;;) {
            if (!bfs()) break;
            for(int i=0,_a=(n);i<_a;i++) ptr[i] = 0;
            while (int pushed = dfs(s, INF))
                flow += pushed;
        }
        return flow;
    }
 
private:
    bool bfs() {
        int qh = 0, qt = 0;
        q[qt++] = s;
        for(int i=0,_a=(n);i<_a;i++) d[i] = -1;
        d[s] = 0;
 
        while (qh < qt && d[t] == -1) {
            int v = q[qh++];
           for(int i=0,_a=(g[v].size());i<_a;i++) {
                int id = g[v][i], to = e[id].b;
                if (d[to] == -1 && e[id].flow < e[id].cap) {
                    q[qt++] = to;
                    d[to] = d[v] + 1;
                }
            }
        }
        return d[t] != -1;
    }
 
    int dfs (int v, int flow) {
        if (!flow) return 0;
        if (v == t) return flow;
        for (; ptr[v] < (int)g[v].size(); ++ptr[v]) {
            int id = g[v][ptr[v]],
                to = e[id].b;
            if (d[to] != d[v] + 1) continue;
            int pushed = dfs(to, min(flow, e[id].cap - e[id].flow));
            if (pushed) {
                e[id].flow += pushed;
                e[id^1].flow -= pushed;
                return pushed;
            }
        }
        return 0;
    }
};
 
const ll MN = 111;
const ll MM = 10111;
const ll oo = 1000111000;
ll n, m, c[MN][MN];
ll eu[MM], ev[MM], ec[MM];
 
int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
        for(ll j=1;j<=n;j++) c[i][j] = oo;

    for(ll i=1;i<=n;i++) c[i][i] = 0;
    for(ll i=1;i<=m;i++){
            ll u, v, l; 
            cin >> u >> v >> l;
            ++u; ++v;
            eu[i] = u; ev[i] = v; ec[i] = l;
            c[u][v] = min(c[u][v], l);
            c[v][u] = c[u][v];
    }

    for(ll k=1;k<=n;k++) 
        for(ll i=1;i<=n;i++)  
           for(ll j=1;j<=n;j++)  c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
 
        if (c[1][n] == oo) {
            cout << 0 << endl;
            return 0;
        }
 
        MaxFlow flow(2*n);
        for(ll i=1;i<=n;i++)  {
            int c = (i == 1 || i == n) ? oo : 1;
            flow.addEdge(2*i-2, 2*i-1, c);
        }
         for(ll i=1;i<=m;i++)   {
            if (c[1][eu[i]] + ec[i] + c[ev[i]][n] == c[1][n])
                flow.addEdge(2*eu[i]-1, 2*ev[i]-2, oo);
            if (c[1][ev[i]] + ec[i] + c[eu[i]][n] == c[1][n])
                flow.addEdge(2*ev[i]-1, 2*eu[i]-2, oo);
        }
        ll res = flow.getMaxFlow(0, 2*n-1);
        if (res >= oo) cout << "IMPOSSIBLE" << endl;
        else cout << res << endl;



    return 0;
}

