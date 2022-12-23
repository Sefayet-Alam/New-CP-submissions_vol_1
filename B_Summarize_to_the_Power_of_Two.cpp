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
vector<ll>twospow(32);
       
void sieve(){

     for(ll i=0;i<32;i++){
            twospow[i]=1<<i;
        }
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
        sieve();
        ll diff;
        vector<ll>vec(n);
        map<ll,ll>freq;
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            freq[vec[i]]++;
        }
        bool f=0;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll flag=0;
            for(ll j=0;j<32;j++){
            diff=twospow[j]-vec[i];
            if(diff==vec[i]){
                if(freq[vec[i]]>1){
                    flag++;
                }
                
            }
            else if(freq[diff]){
                flag++;
            }
            }
            if(flag==0){
                ans++;
            }
        }
        cout<<ans<<endl;

    }


    return 0;
}

