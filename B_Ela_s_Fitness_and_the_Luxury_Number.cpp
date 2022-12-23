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

#define M 10000
const ll maxN=1e9+10;
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}
vector<ll> vis;
void sieve(){   
    for(ll i=1;i<=1e4+10;i++){
       ll g=sqrt(i);
       if(i%g==0){
        vis.push_back(i);
       }
    }
    sort(vis.begin(),vis.end());
}
int main()
{
    fast;
    ll t;
    sieve();
    //setIO();
     //ll tno=1;;
     //t=1;
    cin>>t;
    // for(auto it:vis){
    //     cout<<it<<endl;
    // }
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll k=(upper_bound(vis.begin(),vis.end(),r)-lower_bound(vis.begin(),vis.end(),l));
       cout<<k<<endl;
    }


    return 0;
}
