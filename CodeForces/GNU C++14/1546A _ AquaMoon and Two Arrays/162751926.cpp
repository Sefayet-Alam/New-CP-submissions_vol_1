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
        vector<ll>a(n+1),b(n+1);
    ll inc=0,dec=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll s;
     vector<ll>ansin,ansdec;
    for(ll i=0;i<n;i++){
        cin>>b[i];
        if(b[i]>a[i]){
        s=b[i]-a[i];
        dec+=s;
        for(ll j=0;j<s;j++){
                ansin.push_back(i+1);
         //cout<<i+1<<endl;
        }
 
        }
        else if(b[i]<a[i]){
        s=a[i]-b[i];
        inc+=s;
        for(ll j=0;j<s;j++){
                ansdec.push_back(i+1);
        //cout<<i+1<<endl;
        }
 
        }
 
 
    }
    if(inc!=dec){cout<<-1<<endl;}
    else{
        ll k=0,r=0;
       cout<<inc<<endl;
       for(ll i=0;i<ansin.size();i++){
        cout<<ansdec[i]<<" "<<ansin[i]<<endl;
       }
 
 
    }
   }
 
 
    return 0;
}