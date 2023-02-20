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
 
int main()
{
 
     ll t;
     ll tno=1;;
     //t=1;
     cin>>t;
 
     while(t--){
            ll n;
     cin>>n;
     vector<ll>v(n);
      for(ll i=0;i<n;i++){cin>>v[i];}
    ll cnt=0;
    ll i=1;
    while(!is_sorted(v.begin(),v.end())){
       if (i & 1) { // if 'i' is odd, then run f(i) in odd positions
    for (int j = 0; j < n - 1; j++) {
     if ((j + 1) & 1 && v[j] > v[j + 1]) {
      swap(v[j], v[j + 1]);
     }
    }
   }
   else { // otherwise, run f(i) in even positions
    for (int j = 0; j < n - 1; j++) {
     if ((j + 1) % 2 == 0 && v[j] > v[j + 1]) {
      swap(v[j],v[j + 1]);
     }
    }
   }
   // increment 'cnt'
   cnt++;
   i++;
    }
    cout<<cnt<<endl;
     }
return 0;
}