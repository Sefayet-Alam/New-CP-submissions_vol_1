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
        ll n;
        cin>>n;
        vector<ll>vec(n);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        // for(auto it:vec){
        //     cout<<it<<" ";
        // }
       ll pos=n/2;
       ll k=0;
       for(ll i=0;vec[i]<vec[pos];i++){
        k++;
       }
       ll ans=(n/2)*k;
       ll m=0;
       for(ll i=n-1;vec[i]>vec[pos];i--){
        m++;
       }
       for(ll i=k+1;i<=pos;i++){
        ans+=m;
       }
       if(vec[pos]==vec[pos+1]) ans++;
       if(vec[0]==vec[n-1]) ans++;
       cout<<ans<<endl;
    }


    return 0;
}
