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
vector<ll>par(maxN);
bool vis[maxN];
//when edges dont have same weight...0 and 1 weights..use 0-1 bfs
 ll n,m,k;
vector<ll> ans;
void bfs(){

   priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> >>st;
    st.push({1,0});

    lev[1]=0;
    vis[1]=1;
    while(st.size()>0){
        auto node=st.top();
        ll wet=node.second;
        ll v=node.first;
        st.pop();
        
        vis[v]=1;
        for(auto child :g[v]){
            int child_v=child.first;
            int wt=child.second;
            if(vis[child_v] && lev[v]+wt>lev[child_v]) continue;
            if(lev[v]+wt<lev[child_v]){
                lev[child_v]=lev[v]+wt;
                par[child_v]=v;
                st.push({child_v,lev[child_v]});
            }
        }
        
        }
    }
    //return lev[n]==INF? -1:lev[n];


void func(ll vertex){
   ans.push_back(vertex);
   if(vertex==1) return;
    func(par[vertex]);
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
    ll v1,v2;
    for(ll i=0;i<m;i++){
        cin>>v1>>v2>>k;
        if(v1==v2) continue; //for loops
        g[v1].push_back({v2,k});
        //normal weight=0
        g[v2].push_back({v1,k});
        //reverse-> weight =1

    }
   bfs();
   if(lev[n]==INF) {cout<<-1<<endl; return 0;}
   func(n);
  
   
//   for(ll i=1;i<=n;i++){
//     cout<<lev[i]<<" ";
//    }
//    cout<<endl;
    reverse(ans.begin(),ans.end());
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }
   for(auto it:ans){
    cout<<it<<" ";
   }
   cout<<endl;


   }


    return 0;
}