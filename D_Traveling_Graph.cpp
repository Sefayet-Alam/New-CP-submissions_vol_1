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
const ll maxN=1e3+10;
const ll INF=1000000000000;
#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}
ll n,m;
ll Result;

ll dist[maxN][maxN];
ll degree[maxN];
vector<ll> OddDegrees;
bool vis[maxN];
ll Solve(ll Start,ll Costt) {
    if(Start == OddDegrees.size()) return Costt;
    if(vis[Start]) return Solve(Start + 1, Costt);
    ll Answer = INF;
    
    for(ll To = Start + 1; To < OddDegrees.size(); To++) {
        if(!vis[To]) {
            vis[To] = true;
            Answer = min(Answer, Solve(Start + 1, Costt +dist[OddDegrees[Start]][OddDegrees[To]]));
            vis[To] = false;
        }
    }
    return Answer;
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
        
        cin>>n>>m;
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
               if(i!=j) dist[i][j]=INF;
            }
        }
        Result=0;
        ll f,w,e;
        for(ll i=1;i<=m;i++){
            cin>>f>>w>>e;
           
            dist[w][f]=dist[f][w]=min(dist[f][w],e);
            
            degree[w]++;
            degree[f]++;
            Result+=e;
        }
        for(ll k=1;k<=n;k++){
             for(ll i=1;i<=n;i++){
                 for(ll j=1;j<=n;j++){
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
         }
        

        }

        if(m > 0 && degree[1] == 0) {
        cout<<-1<<endl;
        return 0;
         }
         for(int i = 1; i <=n; i++) {
          for(int j = i+1; j <=n; j++) {
            if(dist[i][j] == INF && degree[i] > 0 && degree[j] > 0) {
                cout<<-1<<endl;
                 return 0;
                 }
         }
          }
        for(int i = 1; i <=n; i++) {if(degree[i]%2) {OddDegrees.push_back(i);}}
        Result += Solve(0, 0);
        cout<<Result<<endl;
    }


    return 0;
}
