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

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}
vector<ll>vec(maxN);
ll n;
ll dp[maxN];
ll func(ll i,ll g,ll b,ll h){
    if(i==n) return 0;
    ll ans=0;
    if(h>vec[i]){
        ans=1+func(i+1,g,b,h+floor((vec[i])/2));
    }
    else{
        if(g) ans=max(ans,func(i,g-1,b,h*2));
        if(b) ans=max(ans,func(i,g,b-1,h*3));
    }

    return ans;

}
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     //t=1;
    cin>>t;

    while(t--){
        ll h;
        cin>>n>>h;
        vec.resize(n);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        ll cnt=func(0,2,1,h);
        cout<<cnt<<endl;
        vec.clear();
    }


    return 0;
}
