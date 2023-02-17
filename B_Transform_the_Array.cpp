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

 
namespace io{
    template<typename First, typename Second> ostream& operator << ( ostream &os, const pair<First, Second> &p ) { return os << p.first << " " << p.second; }
    template<typename First, typename Second> ostream& operator << ( ostream &os, const map<First, Second> &mp ) { for( auto it : mp ) { os << it << endl;  } return os; }
    template<typename First> ostream& operator << ( ostream &os, const vector<First> &v ) { bool space = false; for( First x : v ) { if( space ) os << " "; space = true; os << x; } return os; }
    template<typename First> ostream& operator << ( ostream &os, const set<First> &st ) { bool space = false; for( First x : st ) { if( space ) os << " "; space = true; os << x; } return os; }
    template<typename First> ostream& operator << ( ostream &os, const multiset<First> &st ) { bool space = false; for( First x : st ) { if( space ) os << " "; space = true; os << x; } return os; }
 
    template<typename First, typename Second> istream& operator >> ( istream &is, pair<First, Second> &p ) { return is >> p.first >> p.second; }
    template<typename First> istream& operator >> ( istream &is, vector<First> &v ) { for( First &x : v ) { is >> x; } return is; }
    
    long long fastread(){ char c; long long d = 1, x = 0; do c = getchar(); while( c == ' ' || c == '\n' ); if( c == '-' ) c = getchar(), d = -1; while( isdigit( c ) ){ x = x * 10 + c - '0'; c = getchar(); } return d * x; }
    
    static bool sep = false;
 
    using std::to_string;
 
    string to_string( bool x ){ return ( x ? "true" : "false" ); }
    string to_string( const string & s ){ return "\"" + s + "\""; }
    string to_string( const char * s ){ return "\"" + string( s ) + "\""; }
    string to_string ( const char & c ) { string s; s += c; return "\'" + s + "\'"; }
 
    template<typename Type> string to_string( vector<Type> );
    template<typename First, typename Second> string to_string( pair<First, Second> );
    template<typename Collection> string to_string( Collection );
 
    template<typename First, typename Second> string to_string( pair<First, Second> p ){ return "{" + to_string( p.first ) + ", " + to_string( p.second ) + "}"; }
    template<typename Type> string to_string( vector<Type> v ) { bool sep = false; string s = "["; for( Type x: v ){ if( sep ) s += ", "; sep = true; s += to_string( x ); } s += "]"; return s; }
    template<typename Collection> string to_string( Collection collection ) { bool sep = false; string s = "{"; for( auto x: collection ){ if( sep ) s += ", "; sep = true; s += to_string( x ); } s += "}"; return s; }
 
    void print() { cerr << endl; sep = false; }
    template <typename First, typename... Other> void print( First first, Other... other ) { if( sep ) cerr << " | "; sep = true; cerr << to_string( first ); print( other... ); }
    
} using namespace io;
 

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
const ll N=1e5+9;
vector<bool> Primes(N,1);
vector<ll>primenos;
void SieveOfEratosthenes(ll n)
{
    Primes[1]=0;
    for (ll i=2;i*i<=n;i++) {
    if(Primes[i]==1){     
    for(ll j=i*i;j<=n;j+=i)
        Primes[j]=0;
        }
    }
    for(ll i=1;i<=n;i++){
        if(Primes[i]){
            primenos.push_back(i);
        }
    }
}

int main()
{
    fast;
     ll t;
    //setIO();
     ll tno=1;;
     //t=1;
    cin>>t;
    SieveOfEratosthenes(N);
   
    while(t--){
        ll n;
        vector<ll>divs;
        map<ll,ll>vis;
        cin>>n;
        vector<ll>veca(n);
        cin>>veca;
         vector<ll>vecb(n);
        cin>>vecb;
        vector<ll>lcms(n);
        for(ll i=0;i<n;i++){
            lcms[i]=LCM(veca[i],vecb[i]);
        }
        for(ll i=0;i<n;i++){
            for(auto it:primenos){
                if(it>veca[i]) break;
                if(vis[it]) continue;
                if(veca[i]%it==0){
                    divs.push_back(it);
                    vis[it]=1;
                }
            }
        }
        bool alice=1;
        bool bob=1;
        // for(ll i=0;i<n;i++){
        //     bool flag=0;
        //     for(auto it:divs){
        //         if(it>lcms[i]) break;
        //         if(lcms[i]%it){
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag==0){
        //         alice=0;
        //         break;
        //     }
        // }
        map<ll,ll>divisorneeds;
        map<ll,ll>divisorneeds2;
        map<ll,ll>vis2;
        map<ll,ll>vis3;
        ll cnt=0;
        ll fg=0;
        //cout<<lcms<<endl;
        for(ll i=0;i<n;i++){
            ll k=lcms[i];
            ll f=k/veca[i];
            for(auto it:divs){
               
                cnt=0;
                while(f%it==0){
                    f/=it;
                    cnt++;
                }
               
                if(!vis2[it]){
                    divisorneeds[it]=cnt;
                    vis2[it]=1;
                }
                else{
                   if(cnt!=divisorneeds[it]) bob=0;
                }
                
            }
             if(f>1){
                //cout<<1<<" "<<f<<endl;
                    alice=0;
                    bob=0;
                    fg=1;
                    break;
                }

            ll g=k/vecb[i];

             for(auto it:divs){
               
                cnt=0;
                while(g%it==0){
                    g/=it;
                    cnt++;
                }
               
                if(!vis3[it]){
                    divisorneeds2[it]=cnt;
                    vis3[it]=1;
                }
                else{
                   if(cnt!=divisorneeds2[it]) bob=0;
                }
                
            }
             if(g>1){
                 //cout<<2<<endl;
                    alice=0;
                    bob=0;
                    fg=1;
                    break;
                }
        }
        cout<<"Case "<<tno++<<": ";
        if(alice) cout<<"Yes ";
        else cout<<"No ";
         if(bob) cout<<"Yes ";
        else cout<<"No ";

        cout<<endl;
       
        


    }


    return 0;
}
