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
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define Setpre(n) cout<<fixed<<setprecision(n)
inline ll GCD(ll a, ll b) { return b == 0 ? a : GCD(b, a % b); }
inline ll LCM(ll a, ll b) { return a * b / GCD(a, b); }
inline ll Ceil(ll p, ll q)  {return p < 0 ? p / q : p / q + !!(p % q);}
inline ll Floor(ll p, ll q) {return p > 0 ? p / q : p / q - !!(p % q);}
inline double logb(ll base,ll num){ return (double)log(num)/(double)log(base);}
#define M 10000


inline bool isPerfectSquare(long double x){ if (x >= 0) { long long sr = sqrt(x);return (sr * sr == x); }return false; }
double euclidean_distance(ll x1,ll y1,ll x2,ll y2){double a=(x2-x1)*(x2-x1);double b=(y2-y1)*(y2-y1);double c=(double)sqrt(a+b);return c;}
int popcount(ll x){return __builtin_popcountll(x);};
int poplow(ll x){return __builtin_ctzll(x);};
int pophigh(ll x){return 63 - __builtin_clzll(x);};



/*===================================================================//
            
        ░█▀▀▀█ ░█▀▀▀ ░█▀▀▀ ─█▀▀█ ░█──░█ ░█▀▀▀ ▀▀█▀▀ 
        ─▀▀▀▄▄ ░█▀▀▀ ░█▀▀▀ ░█▄▄█ ░█▄▄▄█ ░█▀▀▀ ─░█── 
        ░█▄▄▄█ ░█▄▄▄ ░█─── ░█─░█ ──░█── ░█▄▄▄ ─░█──
//====================================================================*/

void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}


struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

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
            vec[i]%=3;
        }
        ll z=0,o=0,t=0;
        ll need=n/3;
        for(ll i=0;i<n;i++){
            if(vec[i]==0) z++;
              if(vec[i]==1) o++;
                if(vec[i]==2) t++;
        }
        //cout<<z<<" "<<o<<" "<<t<<" "<<need<<endl;
        ll ans=0;
        ll ex=0;
        if(o==z && t==z) cout<<0<<endl;
        else{
            if(o<need){
                ll oneed=need-o;
               if(z-need>0){
                //cout<<1<<endl;
                ll zgives=z-need;
                if(zgives>=oneed){
                    z-=oneed;
                    ans+=oneed;
                    o+=oneed;
                    oneed=0;
                }
                else{
                    z-=zgives;
                    ans+=zgives;
                    oneed-=zgives;  
                    o+=zgives;   
                }
               
               }
               if(oneed){
                 ll tgives=t-need;
                if(tgives>=oneed){
                    t-=oneed;
                    ans+=oneed*2;
                    o+=oneed;
                    oneed=0;
                }
                else{
                    t-=tgives;
                    ans+=tgives*2;
                    o+=tgives;
                    oneed-=tgives;     
                }

               }
            }
            if(t<need){
               //   cout<<2<<endl;
                ll tneed=need-t;
               if(o-need>0){
                ll ogives=o-need;
                if(ogives>=tneed){
                    o-=tneed;
                    ans+=tneed;
                    t+=tneed;
                    tneed=0;
                }
                else{
                    o-=ogives;
                    ans+=ogives;
                    t+=ogives;
                    tneed-=ogives;     
                }
               
               }
               if(tneed){
                 ll zgives=z-need;
                if(zgives>=tneed){
                    z-=tneed;
                    ans+=tneed*2;
                    t+=tneed;
                    tneed=0;
                }
                else{
                    z-=zgives;
                    ans+=zgives*2;
                    t+=zgives;
                    tneed-=zgives;     
                }

               }
              
            }
           if(z<need){
            // cout<<3<<endl;
                ll zneed=need-z;
               if(t-need>0){
                ll tgives=t-need;
                if(tgives>=zneed){
                    t-=zneed;
                    ans+=zneed;
                    z+=zneed;
                    zneed=0;
                }
                else{
                    t-=tgives;
                    ans+=tgives;
                    z+=tgives;
                    zneed-=tgives;     
                }
               
               }
               if(zneed){
                 ll ogives=o-need;
                if(ogives>=zneed){
                    o-=zneed;
                    ans+=zneed*2;
                    z+=zneed;
                    zneed=0;
                }
                else{
                    o-=ogives;
                    ans+=ogives*2;
                    z+=ogives;
                    zneed-=ogives;     
                }

               }
            }
          //cout<<z<<" "<<o<<" "<<t<<endl;    
         
          cout<<ans<<endl;
        }
       

    }


    return 0;
}
