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
const ll maxN=1e4+10;//for graph
const ll INF=1e9+10;
const ll MOD=1e9+7;

///DSU
ll dist[maxN][maxN];
// ll size[maxN];
int parent[maxN];
ll M[maxN];

void make(int v){
    parent[v]=v;
}

int find(int v){
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]);
}

void Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b){
        if(M[a]<=M[b])  parent[b]=a;
        else parent[a]=b;
    //size[a]+=size[b];
    
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
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++){
        make(i);
    }
   
    for(ll i=1;i<=n;i++){
        cin>>M[i];
       
    }
    cin>>k;
    while(k--){
        ll u,v;
        cin>>u>>v;
        Union(u,v);

    }
    //  for(ll i=1;i<=siz;i++){
    //     cout<<M[i]<<" ";
    // }
    // cout<<endl;
    
     for(int i=1;i<=n;i++){
		ll leader=find(i); //required as only leader is merged  								   // not all members
        if(M[i] == M[leader]) {
        mp[leader]++;
        
        }
        //cout<<i<<" "<<leader<<"  "<<M[i]<<" "<<M[leader]<<" "<<mp[leader]<<endl;
       
    }
    ll cnt=1;
    for(auto it:mp){
      
        cnt*=it.second;
        cnt=cnt%MOD;
    }
    // cout<<endl;
  
    cout<<cnt;
   }
    return 0;
}