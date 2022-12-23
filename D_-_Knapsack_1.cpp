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
const ll maxN=100009;
 
ll n,w,wt[109],val[109];
 
ll dp[109][100009];
 
/*In knapsack problem, we are given n items we have to choose some items and to choose those there should be a condition and we must choose optimally
*/
/*bounded(general bag and stealing items prooblem or 0-1 knpsk) and unbounded knapsack(rod cutting)*/
/*fractional knapsack-similar to 0-1 knapsack but we can pick 0.1 part of an item)...not a prob of dp...rather a prob of greedy*/
///BOUNDED KNAPSACK
ll func(ll ind,ll weigh){
    
    if(ind==n) return 0;
  
    if(dp[ind][weigh]!=-1) return dp[ind][weigh];
    
    ll ans=func(ind+1,weigh);
   if(wt[ind]+weigh<=w) ans=max(ans,(func(ind+1,weigh+wt[ind])+val[ind]));
 
    return dp[ind][weigh]=ans;
 
}
 
int main()
{
    //fast;
     ll t;
 
 
    
    memset(dp,-1,sizeof(dp));
   
    cin>>n>>w;
    for(ll i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
    cout<<func(0, 0)<<endl;
    
 
 
 return 0;
}
//ques link:https://atcoder.jp/contests/dp/tasks/dp_d
//time complexity= O(n*w)