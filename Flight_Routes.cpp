#include<bits/stdc++.h>

using namespace std;


#define ll                  long long
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
const ll maxN=1e5+10;//for graph
//const ll INF=1e16+10;
#define M 10000
#define int long long int
 
int n, m, k;
vector<vector<pair<int,int>>> g;
vector<vector<int>> dist; 
const int INF = 9e15;
 
void dij()
{
 
	priority_queue <
	  pair<int,int>, 
	  vector<pair<int,int>>, 
	  greater<pair<int,int>>
	> pq; 
 
	pq.push({0,1});
 
	while(!pq.empty())
	{
		int u = pq.top().second;
		int d = pq.top().first;
		pq.pop();
 
		if(dist[u][k-1] < d) continue;
 
		for(auto e: g[u])
		{
			int v = e.first;
			int c = e.second;
 
			if(dist[v][k-1] > c+d) 
			{
				dist[v][k-1] = c+d;
				pq.push({dist[v][k-1], v});
				sort(dist[v].begin(), dist[v].end());
			}
		}
	}
}
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m >> k;
	g.resize(n+1);
	dist.resize(n+1);
	for(int i = 1; i <= n; i++)
	{
		dist[i].resize(k);
		for(int j = 0; j <k; ++j)
		{
			dist[i][j] = INF;
		}
	}
	dist[1][0] = 0;
	for(int i = 0; i < m; ++i)
	{
		int u, v, c;
		cin >> u >> v >> c;
		g[u].push_back({v,c});
	}
 
	dij();
 
	for(int i = 0; i < k; ++i)
	{
		cout << dist[n][i] << " ";
	}
}