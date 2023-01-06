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
        vector<ll>a(n+1);
          int f=0;
         vector<ll>freq(n+100,0);  
          vector<ll>freqp(n+100),freqq(n+100);
         vector<ll>p(n+1),q(n+1),ans(n+1);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
            if(freq[a[i]]>1){
                f=1;
            }
             if(freq[a[i]]>2){
                f=2;
            }
        }
        if(f==2){
             cout<<"NO"<<endl;
        }
        else if(f==0){
             cout<<"YES"<<endl;
            for(ll i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
               for(ll i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;

        }
       
        else{
            bool k=0;
            deque<ll>restnum;
            deque<pair<ll,ll>>multiples;
            for(ll i=0;i<n;i++){
                if(freq[a[i]]>1){
                    multiples.push_back({a[i],i});
                }
                else if(freq[a[i]]==1){
                    p[i]=q[i]=a[i];
                  
                }
            }
            for(ll i=1;i<=n;i++){
               if(freq[i]==0){
                restnum.push_back(i);
                restnum.push_back(i);
               }
            }
            sort(multiples.begin(),multiples.end());
          
            bool e=0;
            ll r=multiples.size();
            for(ll i=0;i<r;i++){
               if(e==0){
                p[multiples.front().second]=multiples.front().first; 
                q[multiples.front().second]=restnum.front();
                restnum.pop_front();
               
                multiples.pop_front();
                e=1;
               }
               else{
                q[multiples.front().second]=multiples.front().first;
                p[multiples.front().second]=restnum.front();
                restnum.pop_front();
                
                multiples.pop_front();
                e=0;
               }
            }

            for(ll i=0;i<n;i++){
               // cout<<p[i]<<" "<<q[i]<<endl;
                ans[i]=max(p[i],q[i]);
                freqp[p[i]]++;
                freqq[q[i]]++;
                if(ans[i]!=a[i]){
                    k=1;
                    break;
                }
                if(freqp[p[i]]>1 || freqq[q[i]]>1){ 
                    k=1;
                    break;
                }
            }
           

            if(k) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                for(ll i=0;i<n;i++){
                    cout<<p[i]<<" ";
                }
                cout<<endl;
                 for(ll i=0;i<n;i++){
                    cout<<q[i]<<" ";
                }
                cout<<endl;
            }
           
        }
    }


    return 0;
}
