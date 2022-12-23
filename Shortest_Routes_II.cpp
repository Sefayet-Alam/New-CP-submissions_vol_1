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

ll dist[maxN][maxN];
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
    //cin>>t;
    
    while(t--){
        ll n,m,q;
        cin>>n>>m>>q;
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                dist[i][j]=INF;
            }
        }
        ll f,w,e;
        while(m--){
            cin>>f>>w>>e;
            dist[w][w]=dist[f][f]=0;
            dist[f][w]=min(dist[f][w],e);
            dist[w][f]=min(dist[w][f],e);
        }
        for(ll k=1;k<=n;k++){
             for(ll i=1;i<=n;i++){
                 for(ll j=1;j<=n;j++){
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
         }

        }
        ll a,b;
        while(q--){
            cin>>a>>b;
            ll mindist=dist[a][b];
           
            if(mindist>=INF){
                cout<<-1<<endl;

            }
            else cout<<mindist<<endl;
        }
    }


    return 0;
}

