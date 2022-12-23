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
void make(int v){
    parent[v]=v;

}

int find(int v){
    if(v==parent[v]) return v;
    return parent[v]=find(parent[v]);
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
   
    cin>>n;
    for(ll i=1;i<=n;i++){
        make(i);
    }
    ll q;
    cin>>q;
    ll k;
    while(q--){
      cin>>k;
      ll a,b;
      if(k==1){
        cin>>a>>b;
        ll g=find(a);
        ll h=find(b);
        if(g!=h){
            parent[g]=h;
        }
      }
      else if(k==2){
        cin>>a;
        ll g=find(a);
        parent[g]=a;
        parent[a]=a;
      }
       else if(k==3){
        cin>>a;
        cout<<find(a)<<endl;
       }
    }
  
   }
    return 0;
}