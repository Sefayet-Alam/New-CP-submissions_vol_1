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
vector<bool>vis;
ll n,m;
vector<ll> vec;
 
bool dfs(ll n){
 
 
    if(n>m) return false;
    if(n==m){
       // cout<<"YES"<<endl;
 
       vec.push_back(n);
        return true;
    }
 
    bool f=0;
    f|=dfs(2*n);
 
    f|=dfs(10*n+1);
 
    if(f) vec.push_back(n);
    return f;
 
 
}
int main()
{
    fast;
     ll t;
     //ll tno=1;;
     t=1;
    //cin>>t;
   while(t--){
 
    cin>>n>>m;
    if(dfs(n)){
    cout<<"YES"<<endl;
        sort(vec.begin(),vec.end());
        cout<<vec.size()<<endl;
        for(auto it:vec){cout<<it<<" ";}
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
 
 
    return 0;
}