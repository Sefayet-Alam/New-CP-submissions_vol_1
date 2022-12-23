#include<bits/stdc++.h>

using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
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
const ll N=1e6+10;
#define MOD 1000000007


vector<bool> isPrime(N,true);
vector<ll>primes;
void primeSieve(){
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++) if(isPrime[i]==true) for(int j=2*i;j<N;j+=i) isPrime[j]=false;

    for(ll i=1;i<N;i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }

}


int main()
{
    fast;
     ll t;
     //ll tno=1;;
     t=1;
    //cin>>t;
   while(t--){
    ll n;
    cin>>n;
    primeSieve();
    map<ll,ll>cn;
    ll cnt=0;
    for(auto it:primes){
        if(it>n) break;
        while(n%it==0){
            n/=it;
            cn[it]++;
        }
    }
    ll maxm=-1,ans=n;
    for(auto it:cn){
        if(it.second>maxm){
            maxm=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
   }
    return 0;
}
