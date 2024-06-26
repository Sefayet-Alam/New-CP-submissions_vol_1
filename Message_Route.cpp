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
const ll INF=1e15+10;
#define M 10000


vector<ll>g[maxN];
bool vis[maxN];
ll level[maxN];
ll par[maxN];
//bfs=breadth first search
//according to level traversal

ll n,e;
vector<ll> ans;
void bfs(ll source){
    queue<ll> q;
    q.push(source);
    vis[source]=1;
    level[source]=0;
    while(!q.empty()){
        ll curr_v=q.front();
        q.pop();
        //cout<<curr_v<<" ";
        for(ll child: g[curr_v]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                if(level[child]>level[curr_v]+1){
                level[child]=level[curr_v]+1;
                par[child]=curr_v;
                }
            }
        }
    }
    //cout<<endl;
}


void reset(){
    for(ll i=0;i<maxN;i++){
       
            vis[i]=0;
            level[i]=INF;
        
    }

}
int main()
{
    fast;
    ll t;
    //ll tno=1;;
    t=1;
    //cin>>t;
    while(t--){
    reset();
    cin>>n>>e;
    ll v1,v2;
    for(ll i=0;i<e;i++){
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
  bfs(1);
  if(level[n]!=INF){
  cout<<level[n]+1<<endl;
 
  ll v=n;
  while(v!=1){
   
    ans.push_back(v);
     v=par[v];
  }
   ans.push_back(1);
   reverse(ans.begin(),ans.end());
   for(auto it:ans){
    cout<<it<<" ";
   }
   cout<<endl;
    }
    else{
    cout<<"IMPOSSIBLE"<<endl;
    }
    }
   

}