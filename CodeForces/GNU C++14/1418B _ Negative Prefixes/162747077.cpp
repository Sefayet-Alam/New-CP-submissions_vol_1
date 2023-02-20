#include<bits/stdc++.h>
 
using namespace std;
 
 
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl              "\n"
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
map<ll,ll>cntev;
map<ll,ll>cntod;
int main()
{
    fast;
     ll t;
     //ll tno=1;;
     //t=1;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n),psum(n+1),o(n),ans(n);
    for(ll i=0;i<n;i++){cin>>v[i];}
    for(ll i=0;i<n;i++){cin>>o[i];}
    psum[0]=v[0];
    vector<ll>vec;
     for(ll i=0;i<n;i++){if(o[i]==0){vec.push_back(v[i]);}
     else{ans[i]=v[i];}}
     vdsort(vec);
    ll k=0;
   for(ll i=0;i<n;i++){
    if(o[i]==1){cout<<v[i]<<" ";}
    else{cout<<vec[k++]<<" ";}
 
   }
   cout<<endl;
 
 
 
  }
 
    return 0;
}