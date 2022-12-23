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
const ll INF=1e16+10;
#define M 10000
 
 
vector<pair<ll,ll> >g[maxN];
vector<ll> lev(maxN,INF);
 
//bool vis[maxN];
 
 ll n,m,k;
//vector<ll> ans;
void dijkstra(){
  
    priority_queue< pair<ll,ll> , vector<pair<ll,ll>> ,greater<pair<ll,ll> > >st;
    st.push({0,1});
 
    lev[1]=0;
   // vis[x]=1;
    while(!st.empty()){
        auto node=st.top();
        ll v=node.second;
        ll wet=node.first;
        st.pop();
        //if(vis[v]) continue;
       // vis[v]=1;
       if(wet>lev[v]) continue;
        for(auto child :g[v]){
            int wt=child.first;
            int child_v=child.second;
           
            if(lev[child_v]>lev[v]+wt){
                lev[child_v]=lev[v]+wt;
                //par[child_v]=v;
                st.push({lev[child_v],child_v});
            }
        }
 
        }
 
        for(ll i=1;i<=n;i++){
        cout<<lev[i]<<" ";
    }
    cout<<endl; 
    }
    //return lev[n]==INF? -1:lev[n];
 
int main()
{
    fast;
    // ll t;
     //ll tno=1;;
    // t=1;
   // cin>>t;
   //while(t--){
 
    cin>>n>>m;
    ll v1,v2;
    for(ll i=0;i<m;i++){
        cin>>v1>>v2>>k;
        //if(v1==v2) continue; //for loops
        g[v1].push_back({k,v2});
 
 
 
    }
 
    dijkstra();
   
    //reset();
 
   //}
 
 
    return 0;
}