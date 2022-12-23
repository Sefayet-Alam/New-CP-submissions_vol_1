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
const ll N=1e3+7;//for graph
const ll INF=1e9+10;
#define M 10000

///DSU
//ll dist[N][N];
ll size[N];
int parent[N];
void make(int v){
    parent[v]=v;
    //size[v]=1;

}
vector<pair<ll,ll> >vec,vec2;
int find(int v){
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]);
}

void Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b){
       // if(size[a]<size[b]) swap(a,b);///connecting the smaller tree to the bigger one
        parent[b]=a;
       // size[a]+=size[b];
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
    ll n;//nodes
    ll k;//edges
    cin>>n;
    for(ll i=1;i<=n;i++){
        make(i);
    }

    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        if(find(u)==find(v)){
        vec.push_back({u,v});
         }
        else Union(u,v);

    }
    for (ll i= 1;i<=n;i++){
        for (ll j=i + 1;j<=n;j++){
            if (find(i) == find(j))continue;
            //we know that u<-->v is an edge which should be added
            //because u and v are part of different cc's
            vec2.pb({i,j});
             Union(i,j);//so that we are not introducing extra redundant edges
        }
    }
 
    cout<<vec2.size()<<endl;
    for(ll i=0;i<vec.size();i++){
        cout<<vec[i].first<<" "<<vec[i].second<<" "<<vec2[i].first<<" "<<vec2[i].second<<endl;
    }
   }
    return 0;
}