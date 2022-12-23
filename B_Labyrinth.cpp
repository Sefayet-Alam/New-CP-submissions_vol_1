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
bool vis[maxN][maxN];
ll level[maxN][maxN];
ll n,m,x,y,r,c;
 
//bfs=breadth first search
//according to level traversal
 
ll arr[maxN][maxN];
 
string s[maxN];
 
deque<tuple<ll,ll,ll,ll> >q;
ll cnt=0;
bool isvalid(ll i,ll j){
    if(i<=0 || j<=0 || i>n || j>m || arr[i][j]=='*' || vis[i][j]) return false;
 
 
    return true;
}
 
void bfs(){
 
   q.push_front({r,c,x,y});
 
   while(!q.empty()){
   auto [a,b,X,Y]=q.front();
   q.pop_front();
		if(vis[a][b] || X<0 || Y<0 || !isvalid(a,b)) continue;
		vis[a][b]=1;
		cnt++;
		q.push_front({a+1,b,X,Y});
		q.push_front({a-1,b,X,Y});
		q.push_back({a,b+1,X,Y-1});
		q.push_back({a,b-1,X-1,Y});
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
    cin>>r>>c;
    cin>>x>>y;
    
    for(ll i=1;i<=n;i++){
    cin>>s[i];
        for(ll j=1;j<=m;j++){
 
        arr[i][j]=(ll)s[i][j-1];
        }
    }
 
 
    bfs();
 
    cout<<cnt<<endl;
  }
 
 
 
    return 0;
}

