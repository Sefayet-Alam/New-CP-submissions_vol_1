#include<bits/stdc++.h>
#include<stdio.h>
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
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
 
 
#define M 100006
ll modfunc(ll a,ll b,ll c) {
 
 ll t=1,s=a;
 
 while(b>0){
            if(b%2){t=(t*s)%c;}
            s=(s*s)%c; b/=2;
 }
 
 return t%c;
 
}
const ll N=2e5+1;
ll arr[N][19];
void pp()
{
 for(ll i=0;i<19;i++)
    arr[0][i]=0;
    for(int i=1;i<N;i++)
    {
        ll in=0;
        ll x=i;
        while(x>0)
        {
            arr[i][in]=x%2+arr[i-1][in];
            x/=2;
            in++;
        }
    }
}
int main()
{
 
     ll t;
     ll tno=1;;
     //t=1;
     cin>>t;
     pp();
     while(t--){
      ll l,r;
      cin>>l>>r;
    ll m=INT_MIN;
   for(ll i=0;i<19;i++)
    {
        m=max(m,arr[r][i]-arr[l-1][i]);
    }
    cout<<r-l+1-m<<"\n";
 
     }
return 0;
}