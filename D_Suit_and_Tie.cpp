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
const ll maxN=100007;
#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}

bool vis[maxN];
int main()
{
    fast;
     ll t;
    //setIO();
     //ll tno=1;;
     t=1;
   // cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll>vec(2*n);
        map<ll,pair<ll,ll> >mp;
        for(ll i=0;i<2*n;i++){
            cin>>vec[i];
        }
        ll maxm=0;
        for(ll i=0;i<2*n;i++){
            if(vis[vec[i]]){mp[vec[i]].second=i;}
           else{mp[vec[i]].first=i;
           vis[vec[i]]=1;
           }

        }
        for(auto it:mp){
            auto pos=it.second;
            cout<<pos.first<<" "<<pos.second<<endl;
            maxm=max(maxm,pos.second-pos.first-1);
        }
        cout<<maxm<<endl;
    }


    return 0;
}