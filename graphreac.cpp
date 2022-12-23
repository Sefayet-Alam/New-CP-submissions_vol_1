
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
ll n,m;
string arr[55];
bool isvalid(ll i,ll j,ll val){
    if(i<0 || j<0 || i>=n || j>=m || val+1!=arr[i][j]) return false;

    return true;

}
bool vis[55][55];
vector<pair<ll,ll>> movements={{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};

ll func(ll i,ll j,ll dist){
    dist=1;
    //cout<<(char)arr[i][j]<<endl;
    vis[i][j]=1;
    for(auto it:movements){
        if(!vis[i+it.first][j+it.second] && isvalid(i+it.first,j+it.second,arr[i][j])){
        dist=max(dist,func(i+it.first,j+it.second,dist)+1);
        }

    }
    return dist;

}
void reset1(){

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            vis[i][j]=0;
        }
    }

}
void reset2(){
    for(ll i=0;i<n;i++){
      arr[i].clear();
    }
}
int main()
{
    fast;
     ll t;

     ll tno=1;;
     t=1;
    //cin>>t;

    while(cin>>n>>m){
    if(n==0 && m==0) break;


   vector<pair<ll,ll> >vec;

    for(ll i=0;i<n;i++){
        cin>>arr[i];
        for(ll j=0;j<m;j++){
            if(arr[i][j]=='A'){

                vec.push_back({i,j});
            }
        }
    }
    ll ans=0;
   for(auto it:vec){
     ans=max(ans,func(it.first,it.second,1));
     reset1();
   }

    cout<<"Case "<<tno++<<": "<<ans<<endl;

    reset2();
    }


    return 0;
}
