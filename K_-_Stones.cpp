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
const ll maxN=1e5+7;
#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}
ll n,k,tot;
ll dp[maxN];

vector<ll>vec(maxN);

ll func(ll len){
  
    if(len==0){
       return 0;
    }
       
    if(dp[len]!=-1) return dp[len];
     ll f=0; 
    for(ll i=0;i<n;i++){
      if(len-vec[i]>=0){
        f |= (func(len-vec[i]))^1;
      }
    }

    return dp[len]=f;
}
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;
     t=1;
    //cin>>t;

    while(t--){
        memset(dp,-1,sizeof(dp));
        cin>>n>>k;
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }
        
    }
    if(n==1){
      ll x=vec[0];
      ll cnt=0;
      while(k){
        k-=vec[0];
        cnt++;
      }
      if(cnt%2) cout<<"First"<<endl;
       else cout<<"Second"<<endl;

    }
    else if(func(k))cout<<"First"<<endl;
    else cout<<"Second"<<endl;


    return 0;
}

