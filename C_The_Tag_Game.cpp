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
const ll maxN=2e5+10;//for graph
#define M 10000
 ///THIS PROBLEM TEACHES to find the ancestor of a node after d distance traversal(check the loop of vmain)
 
vector<ll>g[maxN];
bool vis[maxN];
 
ll n,m;
 
ll parent[maxN],d[maxN];

void dfs(ll vertex){

    for(auto &child:g[vertex]){
        if(child!=parent[vertex]){
            parent[child]=vertex;
            d[child]=d[vertex]+1;
            dfs(child);
        }
    }
}
ll ans=0;
void dfs2(ll vertex){
    if(d[vertex]>ans) ans=d[vertex];

    for(auto &child:g[vertex]){
        if(child!=parent[vertex]){
            parent[child]=vertex;
            d[child]=d[vertex]+1;
            dfs2(child);
        }
    }
}

int main()
{
    //fast;
     ll t;
     //ll tno=1;;
     t=1;
    //cin>>t;
   while(t--){
    
    cin>>n>>m;
    ll v1,v2;
    for(ll i=0;i<n-1;i++){
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
  parent[1]=-1;
  d[1]=0;
    dfs(1);
    ll vmain=m;
    for(ll i=0;i<(d[m]-1)/2;i++){
        vmain=parent[vmain];
    }
    dfs2(vmain);
  
    cout<<ans*2<<endl;
   }
 
 
    return 0;
}
