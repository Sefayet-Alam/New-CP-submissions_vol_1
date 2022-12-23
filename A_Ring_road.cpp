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
#define M 10000
 
 
vector<pair<ll,ll> >g[maxN];
bool vis[maxN];
 
ll cost1=0,cost2=0;
void dfs(ll vertex){
    //take action on vertex after entering the vertex
    vis[vertex]=true;
   // cout<<vertex<<endl;
    for(auto child:g[vertex]){
          if(vis[child.first]) continue;
       cost1+=child.second;
 
       dfs(child.first);
 
    }
    //take action on the vertex after exiting the node
}
void dfs2(ll vertex){
    //take action on vertex after entering the vertex
    vis[vertex]=true;
   // cout<<vertex<<endl;
    for(auto child:g[vertex]){
        if(vis[child.first]) continue;
       cost2+=child.second;
 
       dfs2(child.first);
 
    }
    //take action on the vertex after exiting the node
}
int main()
{
    //fast;
     ll t;
     //ll tno=1;;
     t=1;
    //cin>>t;
   while(t--){
    ll n,m;
    cin>>n;
    ll v1,v2,k;
    for(ll i=0;i<n;i++){
        cin>>v1>>v2>>k;
        g[v1].push_back({v2,0});
        g[v2].push_back({v1,k});
    }
   pair<ll,ll> point=g[1].back();
   g[1].pop_back();
   memset(vis,0,sizeof(vis));
   dfs(1);
    pair<ll,ll> q=g[1].back();
   g[1].pop_back();
   g[1].push_back(point);
   memset(vis,0,sizeof(vis));
   dfs2(1);
   for(auto &it:g[point.first]){
    if(it.first==1) cost1+=it.second;
    }
    for(auto &it:g[q.first]){
        if(it.first==1) cost2+=it.second;
    }
    cout<<min(cost1,cost2)<<endl;
   }
 
 
    return 0;
}