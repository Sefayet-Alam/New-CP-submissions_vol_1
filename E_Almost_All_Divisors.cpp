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
const ll maxN=1e6+7;
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
     //t=1;
    cin>>t;
    set<ll>divisors;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>vec(n);
        memset(vis,0,sizeof(vis));
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            vis[vec[i]]=1;
        }
        divisors.clear();
      
        sort(vec.begin(),vec.end());
        
        ll l=0,r=n-1;
        ll ans=vec[l]*vec[r];
        bool f=0;
        for(ll i=2;i*i<=ans;i++){
           if(ans%i==0){
            divisors.insert(i);
            divisors.insert(ans/i);
           }
        
        }
       
       
        //if(vec[l]==vec[r]) f=1;
      
        for(auto it:divisors){
        if(vis[it]==0){f=1;break;}
        }
        if(divisors.size()!=n) {f=1;}
        // while(l<r){
        //     if(ans!=vec[l]*vec[r]) {f=1;break;}
        //     l++;
        //     r--;
        // }
        // if(n%2 && (vec[n/2]*vec[n/2])!=ans) f=1;
        if(f) cout<<-1<<endl;
        else cout<<ans<<endl;
        
        
    }


    return 0;
}
