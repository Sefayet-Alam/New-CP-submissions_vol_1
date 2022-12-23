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
ll vis[maxN];
ll col[maxN];
ll par[maxN];
bool f=0;
void dfs(ll vertex){
   
    vis[vertex]=1;
    for(ll child:g[vertex]){
      if(!vis[child]){
         if(col[vertex]==1) col[child]=2;
        else if(col[vertex]==2) col[child]=1;
        
        par[child]=vertex;
        dfs(child);
      }
      else{
        if(col[child]==col[vertex]) f=1;
      }
       
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
        cin>>n>>e;
         ll v1,v2;
       
        for(ll i=0;i<e;i++){
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
        }
        ll cnt=0;

        for(ll i=1;i<=n;i++){
            if(!vis[i]){
                col[i]=1;
                dfs(i);
                cnt++;
            }
            
        }
       // cout<<cnt<<endl;
        if(f) cout<<"IMPOSSIBLE"<<endl;
        else{
        for(ll i=1;i<=n;i++){
            cout<<col[i]<<" ";
        }
        cout<<endl;
        }
    }


    return 0;
}

