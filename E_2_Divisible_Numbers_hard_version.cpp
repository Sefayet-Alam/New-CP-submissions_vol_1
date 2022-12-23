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

#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll m1=a*b;
        ll m2=c*d;

        ll ans1=-1,ans2=-1;
        bool f=0;
       
        for(ll i=a+1;i<=c;i++){
               // cout<<i<<endl;
            
            ll g=__gcd(m1,i);
            ll k=(m1)/g;
            if(k>b && k<=d){
               ans1=i;ans2=k;
                break;
            }
            ll num=(b+k)/k;
            if((num*k)<=d){
                //cout<<1<<endl;
                ans1=i;
                ans2=num*k;
                break;
            }

         }
          cout<<ans1<<" "<<ans2<<endl;

        }

    return 0;
}

