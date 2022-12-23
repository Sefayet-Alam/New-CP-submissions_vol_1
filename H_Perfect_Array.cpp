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
     t=1;
    //cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll>vec(n);
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++){
            cin>>vec[i];

        }
       for(ll i=0;i<n;i++){
        v.push_back({vec[i],i+1});
       }
       bool f=0;
       vector<ll>ans;
       sort(v.begin(),v.end());
       for(ll i=0;i<n;i++){
       // cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].first>v[i].second || v[i].first!=i+1){
            f=1;
            break;
        }
        ans.push_back(v[i].first);
       }
       if(f) cout<<"NO"<<endl;
       else{
        cout<<"YES"<<endl;
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
       }

    }


    return 0;
}
