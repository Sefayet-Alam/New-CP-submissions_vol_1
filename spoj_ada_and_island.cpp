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
const ll maxN=1005;//for graph
#define M 10000



bool vis[maxN][maxN];
string s[1007];
ll arr[1007][1007];
ll n,m;
bool isvalid(ll i,ll j){

    if(i<=0 || j<=0 ||i>n ||j>m || arr[i][j]=='~') return false;
    return true;
}
vector<pair<ll,ll> >movements={{-1,0},{1,0},{0,1},{0,-1}};
ll steps=0;
ll w,e;
void dfs(ll i,ll j){

    steps++;
    vis[i][j]=1;
    //cout<<i<<" "<<j<<endl;
    for(auto it:movements){
        w=it.first,e=it.second;

        if(isvalid(i+w,j+e) && !vis[i+w][j+e]) dfs(i+w,j+e);
    }

}
void reset(){
     for(ll i=1;i<=n;i++){
        s[i].clear();
        for(ll j=1;j<=m;j++){
           vis[i][j]=0;
           arr[i][j]='~';
        }
    }

}
int main()
{
    fast;
     ll t;
     //ll tno=1;;
     t=1;
    cin>>t;
   while(t--){

    cin>>n>>m;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        cin>>s[i];
        for(ll j=1;j<=m;j++){
            arr[i][j]=s[i][j-1];
        }
    }
    for(ll i=1;i<=n;i++){

        for(ll j=1;j<=m;j++){
            if(vis[i][j]) continue;
            else if(arr[i][j]=='#'){
                steps=0;
                dfs(i,j);
                //cout<<f<<endl;
               ans+=(steps)*(steps);
               // cout<<steps<<" "<<ans<<endl;
            }
        }
    }
   ll p=ans;
   ll q=n*m;
    if(p%q==0) cout<<p/q<<endl;
    else{
            ll r=__gcd(p,q);
        cout<<(p/r)<<" / "<<(q/r)<<endl;
    }
    reset();
   }


    return 0;
}

