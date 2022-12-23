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

#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}
ll grid[60][60];
bool vis[60][60];
ll ansgrid[60][60];
ll n,m;
bool isvalid(ll i,ll j){
    if(i>=n || j>=m || i<0 || j<0 || vis[i][j] || grid[i][j]=='#') return false;
    return true;

}
void dfs(ll srcx,ll srcy){
    vis[srcx][srcy]=1;
    if(grid[srcx+1][srcy]=='.' && isvalid(srcx+1,srcy)){
        dfs(srcx+1,srcy);
    }
    if(grid[srcx+1][srcy]=='#' && grid[srcx][srcy+1]=='.' && isvalid(srcx,srcy+1)){
         dfs(srcx,srcy+1);
    }
    if(grid[srcx+1][srcy]=='#' && grid[srcx][srcy-1]=='.' && isvalid(srcx,srcy-1)){
         dfs(srcx,srcy-1);
    }
}
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
   // cin>>t;

    while(t--){
        cin>>n>>m;
        string s;
        for(ll i=0;i<n;i++){
            
            cin>>s;
            for(ll j=0;j<m;j++){
                grid[i][j]=s[j];
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
             if(!vis[i][j] && grid[i][j]=='V'){
                dfs(i,j);
             }
            }
        }
         for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
             if(vis[i][j]){
               ansgrid[i][j]='V';
             }
             else if(grid[i][j]=='#'){
                ansgrid[i][j]='#';
             }
             else{
                ansgrid[i][j]='.';
             }
            }
        }
          for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
            cout<<(char)ansgrid[i][j];
            }
            cout<<endl;
        }

    }


    return 0;
}

