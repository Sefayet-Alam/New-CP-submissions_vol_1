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
#define M 10000


vector<ll>g[maxN];
bool vis[maxN];
vector<ll> cats(maxN);
ll cnt=0;
ll n,m;
void dfs(ll vertex,ll cat){
    //take action on vertex after entering the vertex

    cat+=cats[vertex];
    if(cats[vertex]==0) cat=0;
    if(cat>m) return;

    ll flag=1;

    vis[vertex]=true;
    // cout<<vertex<<endl;
    for(ll child:g[vertex]){
    //cout<<"par:"<<vertex<<" "<<"child:"<<child<<endl;
        if(vis[child]) continue;
        //take action on the node before entering the child
        flag=0;
        dfs(child,cat);
        //take action on the node after exiting the child
    }
    //take action on the vertex after exiting the node
    if(flag==1 && cat<=m) {
    //cout<<endl<<vertex<<" "<<cnt<<endl;
    cnt++;}
}
void reset(){

    for(ll i=0;i<n;i++){
        g[i].clear();
        vis[i]=0;
    }
    cats.clear();
}
int main()
{
    fast;
     ll t;
     //ll tno=1;;
     t=1;
    //cin>>t;
   while(t--){
    cnt=0;
    cin>>n>>m;
    for(ll i=1;i<=n;i++){
        cin>>cats[i];
    }
    ll v1,v2;
    for(ll i=0;i<n-1;i++){
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
   dfs(1,0);
   cout<<cnt<<endl;
   }


    return 0;
}
/*
5 2
1 1 0 1 1
1 2
2 3
3 4
4 5
*/

