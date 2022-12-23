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
const ll maxN=2e5+10;
#define M 10000
 
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
 
}
int highestPowerOf2(int n)
{
    return (n & (~(n - 1)));
}
bool vis[maxN];
ll cn[maxN];
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     //t=1;
    // cout<<log2(1)<<endl<<endl;
    cin>>t;
    while(t--){
        memset(vis,0,sizeof(vis));
        memset(cn,0,sizeof(cn));
        ll n;
        cin>>n;
        ll req=n;
        vector<ll>vec(n+1);
      ll powo2=0;
        ll cnt=0;
       for(ll i=1;i<=n;i++){
        cin>>vec[i];
 
        if(vec[i]%2==0){
            ll k=highestPowerOf2(vec[i]);
    
            powo2+=log2(k);
        }
       }
    req-=powo2;
    ll maxpos=-1;
    ll g=0;
    vector<ll>powpref;
    for(ll i=1;i<=n;i++){
        if(i%2==0){
        ll mn=(ll) highestPowerOf2(i);  
           // cout<<req<<" "<<mn<<" "<<log2(mn)<<endl;
        ll p=(ll)log2(mn);
        powpref.push_back(p);
        }
    }
  
    sort(powpref.rbegin(),powpref.rend());
 
    for(auto it:powpref){
        if(req<=0) break;
        else{
            req-=it;
            cnt++;
        }
    }
   //cout<<maxpos<<endl;
   
     
       if(req>0) cout<<-1<<endl;
       else cout<<cnt<<endl;
 
      
 
    }
 
 
    return 0;
}