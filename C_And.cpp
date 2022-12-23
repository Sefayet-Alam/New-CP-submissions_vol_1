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
const ll maxN=100007;
#define M 10000
 
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
 
}
bool vis[maxN];
 
int main()
{
    //fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
    //cin>>t;
 
    while(t--){
     ll n,x;
     cin>>n>>x;
     ll f=0;
     ll q=0;
     bool r=0;
     vector<ll>vec(n),vec2(n),v;
     for(ll i=0;i<n;i++){
        cin>>vec[i];
        if(vis[vec[i]]) r=1;
        vis[vec[i]]=1;
     }
     for(ll i=0;i<n;i++){
       vec2[i]=(vec[i]&x);
        if(vis[vec2[i]] && vec2[i]!=vec[i]) f=1;
        //vis[vec2[i]]=1;
     }
     memset(vis,0,sizeof(vis));
    for(ll i=0;i<n;i++){
        if(vis[vec2[i]]) q=2;
        vis[vec2[i]]=1;
     }
    //  for(auto it:vec2){
    //     cout<<it<<" ";
    //  }
    //  cout<<endl;
   
    if(r) cout<<0<<endl;
    else if(f) cout<<f<<endl;
    else if(q) cout<<q<<endl;
    else cout<<-1<<endl;
    }
 
 
    return 0;
}