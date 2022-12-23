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
const ll maxN=2e5+10;
#define M 10000
   ll n,m;
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
 
}
vector<ll> vec(maxN);
ll dp[maxN][100];
ll ans=INT_MAX;
 
ll func(bool f,ll cnt,ll i,ll use){
 
 
 
    if(use<=0 && i<n && vec[i]<0) return INT_MAX;
 
    if(i==n && use>=0 ){
       // cout<<cnt<<endl;
        ans=min(cnt,ans);
        return ans;
    }
    //if(dp[i][f]!=-1) return dp[i][f]; 
    if(vec[i]<0){
       if(f==0) ans=min(ans,func(1,cnt+1,i+1,use-1));
       else ans=min(ans,func(1,cnt,i+1,use-1));
 
 
 
    }
 
    else{
        if(f==1) {
           if(use) ans=min(ans,func(1,cnt,i+1,use-1));
           ans=min(ans,func(0,cnt+1,i+1,use));
        }
        else {
           if(use) ans=min(ans,func(1,cnt+1,i+1,use-1));
            ans=min(ans,func(0,cnt,i+1,use));}
 
 
    }
 
    return dp[i][f]=ans;
 
 
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
        memset(dp,-1,sizeof(dp));
        cin>>n>>m;
 
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }
        ans=INT_MAX;
         ans=func(0,0,0,m);
        //  if(ans==INT_MAX) cout<<-1<<endl;
         cout<<ans<<endl;
 
 
    }
 
 
    return 0;
}