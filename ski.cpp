#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

//VVI
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb                  push_back
#define ll                  long long

const ll INF = 2147483640;

ll a[200000];
ll dp[200000][2];

int main() {
  //  freopen("input.txt", "r", stdin);
    ll n, k, m;
    cin>>n>>k>>m;
    for(ll i=0; i<m; i++)
        cin>>a[i];
    sort(a,a+m);
    dp[0][0]=min(k,n-a[0]+1);
    dp[0][1]=min(a[0],k);
    for(ll i=1; i<m&&a[i]<=k; i++)
        dp[i][1]=a[i];
    for(ll i=1; i<m; i++) {
        dp[i][0]=dp[i-1][1]+min(k,n-a[i]+1);
        if(a[i]>k){
            ll bl=0, br=i;
            while(bl<br){
                ll bm=(bl+br)>>1;
                if(a[i]-a[bm]+1>k)bl=bm+1;
                else br=bm;
            }
            if(bl==i)dp[i][1]=dp[i-1][1]+k;
            else dp[i][1]=dp[bl][0];
        }
    }
    ll res=dp[m-1][1];
    for(ll i=m-1; i>=0&&n-a[i]+1<=k; i--) res=min(res,dp[i][0]);

    cout<<n-res<<endl;
    return 0;
}
