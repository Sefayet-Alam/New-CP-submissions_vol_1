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
ll pow1(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll x = pow1(n, p / 2);
    x = (x * x) % md;
    if (p % 2 == 0)
        return x;
    else
        return (x * n) % md;
}
 
 
int main()
{
    fast;
     ll t;
 
     //ll tno=1;;
     //t=1;
    cin>>t;
    while(t--){
      ll a,b,n;
      cin>>n>>a>>b;
 
      bool f=0;
      if(a==1){
        if((n-1)%b==0) f=1;
        else f=0;
      }
      else{
        for(ll i=1;i<=n;){
            if((n-i)%b==0){f=1; break;}
        i=i*a;
        }
 
      }
      if(f) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
  }
 
    return 0;
}
 