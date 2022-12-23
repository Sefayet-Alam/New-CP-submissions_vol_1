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
const ll maxN=1e5+10;

ll dp[maxN][3];


vector<vector<ll> >vec(maxN);

ll n;
ll func(ll i,ll prev){
  if(i==n+1) return 0;

   

  // cout<<i<<" "<<prev<<" "<<vec[i][0]<<" "<<vec[i][1]<<" "<<vec[i][2]<<endl;
    ll maxm=INT_MIN;
    if(dp[i][prev]!=-1) return dp[i][prev];
    
    if(prev!=0) maxm=max(maxm,func(i+1,0)+vec[i][0]);

    if(prev!=1)maxm=max(maxm,func(i+1,1)+vec[i][1]);

    if(prev!=2) maxm=max(maxm,func(i+1,2)+vec[i][2]);
   
   return dp[i][prev]=maxm;
}

int main()
{
    fast;
     ll t;


     t=1;
    //cin>>t;
   while(t--){
    memset(dp,-1,sizeof(dp));
   
    cin>>n;
    ll a,b,c;
    for(ll i=1;i<=n;i++){
        cin>>a>>b>>c;
        vec[i].push_back(a);
        vec[i].push_back(b);
        vec[i].push_back(c);
    }
    cout<<func(1,-1)<<endl;
    }



    return 0;
}
