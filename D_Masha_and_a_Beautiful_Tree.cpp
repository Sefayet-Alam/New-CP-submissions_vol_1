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
const ll maxN=3e5+10;
#define M 10000

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}

vector<ll>vec(maxN);

int solve(ll l,ll r){
    if(r-l==1) return 0;
    ll mid=(l+r)/2;
    ll ans=0;
    ll maxl=*max_element(vec.begin()+l,vec.begin()+mid);
    ll maxr=*max_element(vec.begin()+mid,vec.begin()+r);
    if(maxl>maxr){
        ++ans;
        for(ll i=0;i<(mid-l);i++){
            swap(vec[l+i],vec[mid+i]);
        }
    }

    return solve(l,mid)+solve(mid,r)+ans;
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
    
        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }
        ll ans=solve(0,n);
        if(is_sorted(vec.begin(),vec.begin()+n)){
            cout<<ans<<endl;
        }
        else cout<<-1<<endl;
        vec.clear();
    }


    return 0;
}

