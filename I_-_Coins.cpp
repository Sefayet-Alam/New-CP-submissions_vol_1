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

ll n;
double p[3005];
double dp[3005][3005];
 double fn(int idx, int sz)
 {
    if(idx==n)
    {
        if(sz>n/2) return 1.0;
        else return 0.0;
    }
    if(dp[idx][sz]!=-1) return dp[idx][sz];
    double ans=(p[idx]*fn(idx+1,sz+1))+((1-p[idx])*fn(idx+1,sz));
    return dp[idx][sz]=ans;


 }
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(ll i=0;i<3000;i++)
    {
        for(ll j=0;j<=3000;j++)
        {
            dp[i][j]=-1;
        }
    }
    double ans=fn(0,0);
    cout<<setprecision(10)<<ans<<endl;

}