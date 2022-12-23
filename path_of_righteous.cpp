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
const ll maxN=255;//for graph
#define M 10000



bool vis[maxN][maxN];
ll n,m;
ll arr[maxN][maxN];
string s[maxN];

bool f=0;
ll sx,sy,ex,ey;
bool isvalid(ll i,ll j){

    if(i<0 || j<0 || i>=n || j>=n){return false;}


    return true;
}
vector<pair<ll,ll> >movements={{1,0},{0,1},{-1,0},{0,-1}};
ll sheeps=0,wolf=0;
ll w,e;

set<ll> lord;


vector<pair<ll,ll> >paths;

ll lords=1000;
void reset(){
     for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            vis[i][j]=0;
        }
    }

}
void dfs(ll i,ll j){

    vis[i][j]=1;
    lord.insert(arr[i][j]);
   // cout<<i<<" "<<j<<endl;
   paths.push_back({i,j});
    if(i==ex && j==ey){
        ll q=lord.size();
        lords=min(q,lords);
        for(auto ir:paths){
             w=ir.first;
            e=ir.second;
            vis[w][e]=0;
        }
        return;
    }

    for(auto it:movements){
       w=it.first;
       e=it.second;
       if(isvalid(i+w,j+e) && !vis[i+w][j+e]) {dfs(i+w,j+e);}
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

    cin>>n;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cin>>sx>>sy;
    cin>>ex>>ey;
    dfs(sx,sy);
    cout<<lords<<endl;

   }
    return 0;
}

