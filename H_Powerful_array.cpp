#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

//VVI
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb                  push_back
#define ll                  long long
#define ff first
#define ss second
#define SZ(a) (int)a.size()
#define UNIQUE(a) (a).erase(unique(all(a)),(a).end())
#define eb emplace_back
#define mp make_pair


///BIT MANIPULATION

#define Set(x, k) (x |= (1LL << k))
#define Unset(x, k) (x &= ~(1LL << k))
#define Check(x, k) (x & (1LL << k))
#define Toggle(x, k) (x ^ (1LL << k))

//LOOPS

#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

///PRINTING

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define nn '\n'
#define pfl(x)              printf("%lld\n",x)
#define pcas(i)                printf("Case %lld: ",i)
#define Setpre(n) cout<<fixed<<setprecision(n)
#define itr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define debug               printf("I am here\n")

///SORTING AND FILLING

#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<ll>());
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
#define mem(a,b) memset(a,b,sizeof(a))
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))

//CONSTANTS
#define md                  10000007
#define PI 3.1415926535897932384626
const double EPS = 1e-9;
const ll N = 2e5+10;
const ll M = 1e9+7;


///INLINE FUNCTIONS
inline ll GCD(ll a, ll b) { return b == 0 ? a : GCD(b, a % b); }
inline ll LCM(ll a, ll b) { return a * b / GCD(a, b); }
inline ll Ceil(ll p, ll q)  {return p < 0 ? p / q : p / q + !!(p % q);}
inline ll Floor(ll p, ll q) {return p > 0 ? p / q : p / q - !!(p % q);}
inline double logb(ll base,ll num){ return (double)log(num)/(double)log(base);}
inline bool isPerfectSquare(long double x){ if (x >= 0) { long long sr = sqrt(x);return (sr * sr == x); }return false; }
double euclidean_distance(ll x1,ll y1,ll x2,ll y2){double a=(x2-x1)*(x2-x1);double b=(y2-y1)*(y2-y1);double c=(double)sqrt(a+b);return c;}
int popcount(ll x){return __builtin_popcountll(x);};
int poplow(ll x){return __builtin_ctzll(x);};
int pophigh(ll x){return 63 - __builtin_clzll(x);};


/// Data structures
typedef unsigned long long ull;
typedef pair<ll, ll>    pll;
typedef vector<ll>      vl;
typedef vector<pll>     vpll;
typedef vector<vl>      vvl;
template <typename T> using PQ = priority_queue<T>;
template <typename T> using QP = priority_queue<T,vector<T>,greater<T>>;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T,typename R> using ordered_map = tree<T, R , less<T>, rb_tree_tag, tree_order_statistics_node_update>;
;

 
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

ll T=0;
 
ll tre[3*N];
ll lazy[3*N];
 
ll merge(ll x,ll y){
    return x+y;
}
 
void buildSegTree(vector<ll>& arr, ll treeIndex, ll lo, ll hi){
 
    if (lo == hi) {                 // leaf node. store value in node.
        tre[treeIndex] = arr[lo];
        return;
    }
 
    ll mid = lo + (hi - lo) / 2;   // recurse deeper for children.
    buildSegTree(arr, 2 * treeIndex + 1, lo, mid);
    buildSegTree(arr, 2 * treeIndex + 2, mid + 1, hi);
 
    // merge build results
    tre[treeIndex] = merge(tre[2 * treeIndex + 1], tre[2 * treeIndex + 2]);
}
 
// call this method as buildSegTree(arr, 0, 0, n-1);
// Here arr[] is input array and n is its size.
 
ll querySegTree(ll treeIndex, ll lo, ll hi, ll i, ll j){
    // query for arr[i..j]
 
    if (lo > j || hi < i)               // segment completely outside range
        return 0;                       // represents a null node
 
    if (i <= lo && j >= hi)             // segment completely inside range
        return tre[treeIndex];
 
    ll mid = lo + (hi - lo) / 2;       // partial overlap of current segment and queried range. Recurse deeper.
 
    if (i > mid)
        return querySegTree(2 * treeIndex + 2, mid + 1, hi, i, j);
    else if (j <= mid)
        return querySegTree(2 * treeIndex + 1, lo, mid, i, j);
 
    ll leftQuery = querySegTree(2 * treeIndex + 1, lo, mid, i, mid);
    ll rightQuery = querySegTree(2 * treeIndex + 2, mid + 1, hi, mid + 1, j);
 
    // merge query results
    return merge(leftQuery, rightQuery);
}
 
// call this method as querySegTree(0, 0, n-1, i, j);
// Here [i,j] is the range/interval you are querying.
// This method relies on "null" nodes being equivalent to storing zero.
 
void updateValSegTree(ll treeIndex, ll lo, ll hi, ll arrIndex, ll val)
{
    if (lo == hi) {                 // leaf node. update element.
        tre[treeIndex] = val;
        return;
    }
 
    ll mid = lo + (hi - lo) / 2;   // recurse deeper for appropriate child
 
    if (arrIndex > mid)
        updateValSegTree(2 * treeIndex + 2, mid + 1, hi, arrIndex, val);
    else if (arrIndex <= mid)
        updateValSegTree(2 * treeIndex + 1, lo, mid, arrIndex, val);
 
    // merge updates
    tre[treeIndex] = merge(tre[2 * treeIndex + 1], tre[2 * treeIndex + 2]);
}
 
// call this method as updateValSegTree(0, 0, n-1, i, val);
// Here you want to update the value at index i with value val.
 
void updateLazySegTree(ll treeIndex, ll lo, ll hi, ll i, ll j, ll val){
    if (lazy[treeIndex] != 0) {                             // this node is lazy
        tre[treeIndex] += (hi - lo + 1) * lazy[treeIndex]; // normalize current node by removing laziness
 
        if (lo != hi) {                                     // update lazy[] for children nodes
            lazy[2 * treeIndex + 1] += lazy[treeIndex];
            lazy[2 * treeIndex + 2] += lazy[treeIndex];
        }
 
        lazy[treeIndex] = 0;                                // current node processed. No longer lazy
    }
 
    if (lo > hi || lo > j || hi < i)
        return;                                             // out of range. escape.
 
    if (i <= lo && hi <= j) {                               // segment is fully within update range
        tre[treeIndex] += (hi - lo + 1) * val;             // update segment
 
        if (lo != hi) {                                     // update lazy[] for children
            lazy[2 * treeIndex + 1] += val;
            lazy[2 * treeIndex + 2] += val;
        }
 
        return;
    }
 
    ll mid = lo + (hi - lo) / 2;                             // recurse deeper for appropriate child
 
    updateLazySegTree(2 * treeIndex + 1, lo, mid, i, j, val);
    updateLazySegTree(2 * treeIndex + 2, mid + 1, hi, i, j, val);
 
    // merge updates
    tre[treeIndex] = tre[2 * treeIndex + 1] + tre[2 * treeIndex + 2];
}
// call this method as updateLazySegTree(0, 0, n-1, i, j, val);
// Here you want to update the range [i, j] with value val.
 
ll queryLazySegTree(ll treeIndex, ll lo, ll hi, ll i, ll j){
    // query for arr[i..j]
 
    if (lo > j || hi < i)                                   // segment completely outside range
        return 0;                                           // represents a null node
 
    if (lazy[treeIndex] != 0) {                             // this node is lazy
        tre[treeIndex] += (hi - lo + 1) * lazy[treeIndex]; // normalize current node by removing laziness
 
        if (lo != hi) {                                     // update lazy[] for children nodes
            lazy[2 * treeIndex + 1] += lazy[treeIndex];
            lazy[2 * treeIndex + 2] += lazy[treeIndex];
        }
 
        lazy[treeIndex] = 0;                                // current node processed. No longer lazy
    }
 
    if (i <= lo && j >= hi)                                 // segment completely inside range
        return tre[treeIndex];
 
    ll mid = lo + (hi - lo) / 2;                           // partial overlap of current segment and queried range. Recurse deeper.
 
    if (i > mid)
        return queryLazySegTree(2 * treeIndex + 2, mid + 1, hi, i, j);
    else if (j <= mid)
        return queryLazySegTree(2 * treeIndex + 1, lo, mid, i, j);
 
    ll leftQuery = queryLazySegTree(2 * treeIndex + 1, lo, mid, i, mid);
    ll rightQuery = queryLazySegTree(2 * treeIndex + 2, mid + 1, hi, mid + 1, j);
 
    // merge query results
    return leftQuery + rightQuery;
}
// call this method as queryLazySegTree(0, 0, n-1, i, j);
// Here [i,j] is the range/interval you are querying.
// This method relies on "null" nodes being equivalent to storing zero.
 
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
     t=1;
    //cin>>t;

    while(t--){
        ll n,q;
        cin>>n>>q;
        map<ll,ll>freq;
        vector<ll>vec(n);
        ll tot=0;
        vector<ll>pref(n);
        for(ll i=0;i<n;i++){
            cin>>vec[i];
            freq[vec[i]]++;
            tot=(freq[vec[i]])*(freq[vec[i]])*(vec[i]);
            pref[i]=tot;
        }
        for(ll i=1;i<n;i++){
            pref[i]+=pref[i-1];
        }
        cout<<pref<<endl;
        buildSegTree(pref,0,0,n-1);
        ll l,r;
        while(q--){
            cin>>l>>r;
            l--,r--;
            ll ans=pref[r];
            if(l) ans-=pref[l-1];
            cout<<ans<<endl;
        }
        

      
    }


    return 0;
}
