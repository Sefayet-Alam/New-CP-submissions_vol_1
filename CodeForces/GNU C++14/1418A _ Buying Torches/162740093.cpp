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
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
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
      ll x , y , k ;
        cin >> x >> y >> k ;
        ll total_needed = k + y * k - 1;
 
        ll x2 = x - 1;
        ll trade = (total_needed + x2-1)/x2;
        trade += k ;
        cout << trade <<  endl ;
 
 
 
  }
 
    return 0;
}