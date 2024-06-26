#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define nn '\n'
#define ff first
#define ss second
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define Setpre(n) cout<<fixed<<setprecision(n)
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortall(x) sort(all(x))
#define UNIQUE(a) (a).erase(unique(all(a)),(a).end())
#define SZ(a) (int)a.size()
#define mem(a,b) memset(a,b,sizeof(a))
#define itr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define fast_IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define Set(x, k) (x |= (1LL << k))
#define Unset(x, k) (x &= ~(1LL << k))
#define Check(x, k) (x & (1LL << k))
#define Toggle(x, k) (x ^ (1LL << k))
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pll>     vpll;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
template <typename T> void display (T const& coll){typename T::const_iterator pos;typename T::const_iterator end(coll.end());for(pos=coll.begin(); pos!=end; ++pos) cout << *pos << ' ';cout << endl;}
template <typename T> using PQ = priority_queue<T>;
template <typename T> using QP = priority_queue<T,vector<T>,greater<T>>;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
template <typename T,typename R> using ordered_map = tree<T, R , less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T,typename R> using ordered_multimap = tree<T, R , less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> T BigMod (T b, T p, T m) {if (p == 0) return 1; if (p % 2 == 0) {T s = BigMod(b, p / 2, m); return ((s % m) * (s % m)) % m;} return ((b % m) * (BigMod(b, p - 1, m) % m)) % m;}
template <typename T> T ModInv (T b, T m) {return BigMod(b, m - 2, m);}
inline void swap(ll &x, ll &y) {ll temp = x; x = y; y = temp;}
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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r) {
    return uniform_int_distribution<int>(l, r) (rng);
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
const double EPS = 1e-9;
const int N = 2e5+10;
const int M = 1e9+7;


// int a[N];
// vl g[N];

void solve() {
    ll n=0,a=0,b=0,i=0,j=0,k=0,l=0,r=0,ans=0,temp=0,cnt=0,sum=0;
    string s,s1,s2,s3;
    cin>>n>>s2;
    set<char> st;
    for(char ch='a';ch<='z';ch++) st.insert(ch);
    unordered_set<char,custom_hash> st2;
    fo(i,n){
        if(!st2.count(s2[i])){
            st2.insert(s2[i]);
            s.pb(s2[i]);
        }
    }
    // deb(s);
    n=SZ(s);
    unordered_map<char,char,custom_hash> par,child;
    fo(i,n){
        if(!child.count(s[i])){
            // assert(st.size());
            // if(i>=24) display(st);
            for(auto &it:st){
                if(it==s[i]) continue;
                else{
                    par[s[i]]=it;
                    child[it]=s[i];
                    st.erase(it);
                    break;
                }
            }
            // deb2(i,par[s[i]]);
        }
        else{
            for(auto &it:st){
                if(it==s[i]) continue;
                else if(!par.count(it)){
                    par[s[i]]=it;
                    child[it]=s[i];
                    st.erase(it);
                    // deb2(i,par[s[i]]);
                    break;
                }else{
                    char pr=it;
                    bool f=1;
                    f=(pr!=s[i]);
                    while(par.count(pr)){
                        pr=par[pr];
                        if(pr==s[i]){
                            f=0;
                            break;
                        }
                        // deb(pr);
                    }
                    if(f||SZ(par)==25){
                        par[s[i]]=it;
                        child[it]=s[i];
                        st.erase(it);
                        // deb2(i,par[s[i]]);
                        break;
                    }

                }
                // deb2(i,par[s[i]]);
            }
        }
    }
    fo(i,SZ(s2)){
        s2[i]=par[s2[i]];
    }
    cout<<s2<<nn;

}

int main() {
    fast_IO;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int t = 1;
    cin >> t;
    while(t--) {

        solve();
    }

    return 0;
}
