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
        string s;
        cin>>s;
        vector<pair<ll,ll> >ans;
        ll n=s.size();
        s='$'+s;
        vector<ll>vec; 
        for(ll i=1;i<=n;i++){
            bool f=0;
        if(n%i==0){
        for(ll k=1;k<=n/i;k++){
            f=0;
          for(ll j=k;j<=n;j+=n/i){
            if(s[j]!='X'){
                    f=1;
                    break;
                }
            
           
          }
         if(f==0){
          ans.push_back({i,n/i});
            break;
         }
        }
      
        }
        }
      
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<" ";
        for(auto it:ans){
            cout<<it.first<<"x"<<it.second<<" ";
        }
        cout<<endl;

    }


    return 0;
}