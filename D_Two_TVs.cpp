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
    t=1;
    //cin>>t;

    while(t--){
   ll n;
   cin>>n;
   ll maxm=0;
   ll x,y;
  vector<pair<ll,ll> >vec;
  for(ll i=0;i<n;i++){
    cin>>x>>y;
    vec.push_back({x,y});

  }
  sort(vec.begin(),vec.end());
  pair<ll,ll> ftv={0,0},stv={0,0};
    bool f=0;
  for(ll i=0;i<n;i++){
    if(ftv.second<vec[i].first){
        ftv={0,0};
    }
    if(stv.second<vec[i].first){
        stv={0,0};
    }
    if(ftv.second==0){
        ftv=vec[i];
    }
    else if(stv.second==0){
        stv=vec[i];
    }
    else{
        f=1;
        break;
    }
  }
  if(f) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
    }


    return 0;
}

