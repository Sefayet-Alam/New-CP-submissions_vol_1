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
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
const ll maxN=112345;//for graph
#define M 10000


vector<pair<ll,ll> >g[maxN];

ll n;
ll ans,r1,r2;
ll d[maxN];
void dfs(ll u,ll par,ll w,ll & r){
    if(w>=ans){
        r=u;
        ans=w;
    }
    for(pair<ll,ll> child : g[u]){
        ll v=child.first;
        ll ex=child.second;
        if(v==par) continue;
       //cout<<child<<" "<<depth[child]<<endl;
        dfs(v,u,w+ex,r);
    }

}

void dfs2(ll u,ll par,ll w){
    d[u]=max(d[u], w);
    for(pair<ll,ll> child : g[u]){
        ll v=child.first;
        ll ex=child.second;
        if(v==par) continue;
       //cout<<child<<" "<<depth[child]<<endl;
        dfs2(v,u,w+ex);
    }

}


int32_t main()
{
    fast;
     ll t;
     //ll tno=1;;
     t=1;
    cin>>t;
    ll v1,v2,w;
   while(t--){

    cin>>n;

    for(ll i=0;i<=n;i++) {g[i].clear();d[i]=0;}
    v1,v2,w;
    for(ll i=1;i<=n-1;i++){
        cin>>v1>>v2>>w;

        g[v1].push_back({v2,w});
        g[v2].push_back({v1,w});
    }

    ans=0; dfs(1,-1,0,r1);
    ans=0; dfs(r1,-1,0,r2);
    //cout<<r1<<" "<<r2<<endl;
    dfs2(r1, -1, 0);
    dfs2(r2, -1, 0);
    for(ll i=1; i<=n; i++){

      cout <<d[i]<<" ";
    }
    cout << endl;



   }


    return 0;
}


