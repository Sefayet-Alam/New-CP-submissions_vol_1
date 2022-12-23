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
#define M 10000


vector<ll>g[maxN];
bool vis[maxN];
ll par[maxN];
ll cnt=1;
bool f=0;
void dfs(ll vertex){
    
    vis[vertex]=true;
    par[1]=0;
   
    for(ll child:g[vertex]){
         if(child==par[vertex]) continue;
        else if(vis[child]) {f=1;
        return;}

        par[child]=vertex;
        cnt++;
         dfs(child);
       
    }
  
}

int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
    //cin>>t;

    while(t--){
        ll n,e;
        f=0;
    cin>>n>>e;
    ll v1,v2;
    for(ll i=0;i<e;i++){
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    for(int i=1;i<=n;i++) {if(vis[i]==false) f=1;}
    if(f) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }


    return 0;
}

