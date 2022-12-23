#include<bits/stdc++.h>

using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
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

const ll maxN=1e3+10;//for graph
#define M 10000


bool vis[maxN][maxN];
ll n,m;


vector<pair<ll,ll>> movements={{-1,0},{1,0},{0,-1},{0,1}};
ll arr[maxN][maxN];
ll cnt=0;
bool isvalid(ll i,ll j){
    if(i>=n || j>=m || i<0 || j<0 || arr[i][j]=='#' || vis[i][j]){
        return false;
    }
    return true;

}
void dfs(ll x,ll y){
    vis[x][y]=1;
    for(auto it:movements){
        if(isvalid(it.first+x,it.second+y)){
            dfs(it.first+x,it.second+y);
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
        string s;
       memset(vis,0,sizeof(vis));
        cin>>n>>m;
        for(ll i=0;i<n;i++){
            cin>>s;
            for(ll j=0;j<m;j++){
                arr[i][j]=s[j];
            }
        }

        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
             if(arr[i][j]=='.' && !vis[i][j]){
                cnt++;
                dfs(i,j);
             }
            }
        }
        //  for(ll i=0;i<n;i++){
        //    // cin>>s;
        //     for(ll j=0;j<m;j++){
        //         cout<<(char)arr[i][j];
        //     }
        //     cout<<endl;
        // }
        cout<<cnt<<endl;
    }


    return 0;
}
