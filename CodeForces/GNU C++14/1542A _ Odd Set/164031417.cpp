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
 
ll sumodigits(ll g){
    ll sum=0;
 
        while(g>0){
            sum+=g%10;
            g/=10;
        }
        return sum;
}
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
      ll odd=0,ev=0;
      vector<ll>v(2*n);
      for(ll i=0;i<2*n;i++){
        cin>>v[i];
        if(v[i]%2)odd++;
        else ev++;
      }
      if(odd==ev){cout<<"Yes"<<endl;}
      else{cout<<"No"<<endl;}
 
  }
 
    return 0;
}
 