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
const ll N=1e5+10;//for graph
const ll INF=1e9+10;
#define M 10000

///DSU
//ll dist[N][N];
ll size[N];
int parent[N];
map<ll,ll>freq;
 ll ans=0;
ll n;//nodes
ll k;
void make(int v){
    parent[v]=v;
    size[v]=1;
    freq[1]++;

}
set<ll>st;

int find(int v){
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]);
}
ll currans=0;
void Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b){
   
    parent[a]=b;
    
    ll sy=size[b];
        freq[sy]--;
        if(freq[sy]==0) st.erase(sy);
    
    ll sx=size[a];
         freq[sx]--;
        if(freq[sx]==0) st.erase(sx);

    size[b]+=size[a];
    sy=size[b];
    freq[sy]++;
    
    if(freq[sy]==1) st.insert(sy);

    ll prev=-1;
    ll minm=n+1;

    for(auto it:st){
        if(freq[it]>1){
            minm=0;
            break;
        }
        else if(prev!=-1){
            minm=min(minm,it-prev);
        }
        prev=it;
    }

    if(minm==n+1) minm=0;///If single group formed
    
    ans=minm;

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
   
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        make(i);
    }
  st.insert(1);
 
    while(k--){
        ll u,v;
        cin>>u>>v;
        Union(u,v);
        cout<<ans<<endl;
    }
   
   }
    return 0;
}