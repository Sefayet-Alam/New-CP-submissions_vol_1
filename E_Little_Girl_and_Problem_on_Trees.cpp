#include<bits/stdc++.h>

using namespace std;


#define lld                 long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<ll>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")

#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX_N 100005
#define MAX_K 100005


void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}
int n, q, a, b;
int kom, v, x, d;

struct Node
{
    vector<int> adj;
};
Node graf[MAX_N];
bool mark[MAX_N];
int chn[MAX_N];
int dep[MAX_N];
vector<lld> chainZ[MAX_K];
int size[MAX_K];
int chn_amt;
lld dep_upd[MAX_K];

inline int min1(int a, int b)
{
    if (a<b) return a;
    return b;
}

void d_update(int x, lld val)
{
    while (x <= MAX_K - 1)
    {
        dep_upd[x] += val;
        x += (x & -x);
    }
}
lld d_read(int x)
{
    lld sum=0;
    while (x > 0)
    {
        sum += dep_upd[x];
        x -= (x & -x);
    }
    return sum;
}


void update(int id, int x, lld val)
{
    while (x <= size[id])
    {
        chainZ[id][x] += val;
        x += (x & -x);
    }
}
lld read(int id, int x)
{
    lld sum=0;
    while (x > 0)
    {
        sum += chainZ[id][x];
        x -= (x & -x);
    }
    return sum;
}


inline void DFS()
{
    stack<int> dfs_stek;
    stack<int> depth;
    stack<int> chain_id;
    dfs_stek.push(1);
    depth.push(0);
    while (!dfs_stek.empty())
    {
        int xt = dfs_stek.top();
        int dt = depth.top();
        //printf("xt = %d, dt = %d\n",xt,dt);
        dfs_stek.pop();
        depth.pop();
        dep[xt] = dt;
        mark[xt] = true;
        if (xt == 1)
        {
            chn_amt = graf[xt].adj.size();
            for (int i=0;i<graf[xt].adj.size();i++)
            {
                dfs_stek.push(graf[xt].adj[i]);
                depth.push(1);
                chain_id.push(i);
                mark[graf[xt].adj[i]] = true;
            }
        }
        else
        {
            int ct = chain_id.top();
            chain_id.pop();
            chn[xt] = ct;
            size[ct] = dt;
            for (int i=0;i<graf[xt].adj.size();i++)
            {
                if (!mark[graf[xt].adj[i]])
                {
                    dfs_stek.push(graf[xt].adj[i]);
                    depth.push(dt+1);
                    chain_id.push(ct);
                    mark[graf[xt].adj[i]] = true;
                }
            }
        }
    }
}

int main()
{
    scanf("%d%d",&n,&q);
    for (int i=0;i<n-1;i++)
    {
        scanf("%d%d",&a,&b);
        graf[a].adj.push_back(b);
        graf[b].adj.push_back(a);
    }
    DFS();
    //printf("ziv_dfs\n");
    for (int i=0;i<chn_amt;i++)
    {
        chainZ[i].resize(size[i]+5);
    }
    while (q--)
    {
        scanf("%d",&kom);
        if (kom == 0)
        {
            scanf("%d%d%d",&v,&x,&d);
            if (v == 1)
            {
                d_update(1,x);
                d_update(d+2,-x);
                //printf("depth updated from %d to %d\n",1,d+2);
            }
            else
            {
                int ch = chn[v];
                int l = dep[v] - d;
                int r = min1(size[ch],dep[v] + d);
                if (dep[v] <= d)
                {
                    d_update(1,x);
                    d_update(d-dep[v]+2,-x);
                    //printf("depth updated from %d to %d\n",1,d-dep[v]+2);
                    l = d-dep[v]+1;
                }
                update(ch,l,x);
                if (r < size[ch]) update(ch,r+1,-x);
                //printf("updated from %d to %d\n",l,r);
            }
        }
        else if (kom == 1)
        {
            scanf("%d",&v);
            lld ret = 0LL;
            int ch = chn[v];
            ret += read(ch,dep[v]);
            ret += d_read(dep[v]+1);
            //cout << ret << endl;
            printf("%I64d\n",ret);
        }
    }
    return 0;
}