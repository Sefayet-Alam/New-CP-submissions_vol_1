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
const ll maxN=2010;//for graph
const ll INF=1e9+10;//for graph
#define M 10000
 
 
vector<ll>g[maxN];
bool vis[maxN];
ll level[maxN];
ll n,m,x,y,r,c;
vector<pair<ll,ll> >points;
//bfs=breadth first search
//according to level traversal
 
ll arr[maxN][maxN];
 
string s[maxN];
 

ll cnt=0;


void bfs(){
    memset(vis, 0, sizeof(vis));
    memset(level,INF, sizeof(level)); 
   queue<ll> q;
   q.push(1);
   vis[1]=1;
    level[1]=0;
   while(!q.empty()){
        ll par=q.front();
        q.pop();
        for(auto child:g[par]){
             if(level[child]>level[par]+1){level[child]=level[par]+1;}
             if(!vis[child]){
             vis[child]=1;
             q.push(child);
             }
    }
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
 
    cin>>n>>m;
    
    for(ll i=1;i<=n;i++){
    cin>>s[i];
        for(ll j=1;j<=m;j++){
 
        arr[i][j]=(ll)s[i][j-1];
        if (arr[i][j] == '#') {
                    g[i].push_back(j + n);
                    g[j + n].push_back(i);
                }
        }
    }
    bool g=1;
    bool r=1;
    for(ll j=1;j<=m;j++){
        if(arr[n][j]=='#'){
            g=0;break;
        }
    }
     for(ll j=1;j<=m;j++){
        if(arr[1][j]=='#'){r=0;
      break;
      }
    }
 
    if(g || r){cout<<-1<<endl;}
    else{
    bfs();
    if(level[n]>2000) cout<<-1<<endl;
    else cout<<level[n]<<endl;
    }

 

 
    
  }
 
 
 
    return 0;
}
