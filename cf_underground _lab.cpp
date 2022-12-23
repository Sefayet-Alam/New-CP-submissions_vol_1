#include<bits/stdc++.h>

using namespace std;


#define ll                  int
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
const ll maxN=200002;//for graph
#define M 10000


vector<ll>g[maxN];
bool vis[maxN];

ll n,m,k;
vector<ll>eulertour;


void dfs(ll vertex){

    vis[vertex]=true;
    eulertour.push_back(vertex);
    //cout<<vertex<<endl;
    for(ll child:g[vertex]){
       // cout<<"par:"<<vertex<<" "<<"child:"<<child<<endl;
        if(vis[child]) continue;

        dfs(child);
         eulertour.push_back(vertex);
    }

}
int main()
{
    //fast;
     ll t;
     //ll tno=1;;
     t=1;
    //cin>>t;
   while(t--){
    cin>>n>>m>>k;
    ll v1,v2;
    for(ll i=0;i<m;i++){
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

   dfs(1);



   ll g=(2*n+k-1)/k;

    for(ll i=0;i<k;i++)
    {
        ll b=i*g,e= min((i+1)*g,(ll)eulertour.size());
        if(e <= b)
        {
            printf("1 1\n");
            continue;
        }

      cout<<e-b<<" ";
        for(ll j=b;j<e;j++)
        {
          cout<<eulertour[j]<<" ";
        }
    cout<<endl;
    }
   }


    return 0;
}

