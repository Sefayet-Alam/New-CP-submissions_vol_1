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
vector<vector<ll> >vec(150000);

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
        set<ll>posi;
        ll q,w;
        while(n--){
            cin>>q>>w;
            vec[w].push_back(q);
            posi.insert(w);
        }
       vector<ll>pos;
       for(auto it:posi){
        pos.push_back(it);
       }
    
       // reverse(vec.begin(),vec.end());
       ll m=pos.size();
       for(ll i=m-1;i>=0;i--){
        ll f=pos[i];
        for(ll j=0;j<vec[f].size();j++){
            cout<<vec[f][j]<<" "<<f<<endl;
        }
       }
    }


    return 0;
}

