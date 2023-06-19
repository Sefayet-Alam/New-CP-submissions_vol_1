#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string>
#include<set>
#include<string.h>

// #include<multiset>
#include<map>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;

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
const ll N = 2e2+10;
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


void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

}


const int  m=3;
ll Trie[N][m];
ll nnode,n;
bool isword[N];
bool f;

void reset(ll k){
    for(ll i=0;i<m;i++){
        Trie[k][i]=-1;
    }
}

void Insert(string s){
    ll n=s.size(),node=0;
    for(ll i=0;i<n;i++){
        if(Trie[node][s[i]-'0']==-1){
            Trie[node][s[i]-'0']=++nnode;
            // reset(nnode);
        }
        // cout<<node<<nn;
        // if(i<n-1)
         node=Trie[node][s[i]-'0'];
    }
    isword[node]=1;
}

bool Search(string s){
    // print(s);
    ll sz=s.size(),node=0;
    for(ll i=0;i<sz-1;i++){
         ll ch=s[i]-'0';
        if(Trie[node][ch]==-1){
            return false;
        }
        else if(isword[Trie[node][ch]]){
            f=1;
        }
        node=Trie[node][ch];
    }
    if(isword[node]) return true;
    else return false;
}

int main()
{
    fast;
     ll t;
    //setIO();
     ll tno=1;;
     t=1;
    //cin>>t;
    mem(Trie,-1);
    mem(isword,0);
    f=0;
    nnode=0;
     vector<string>vec;
    while(t--){
        string str;
       
        while(cin>>str){
           if(str=="9"){
            f=0;
            for(ll i=0;i<vec.size();i++){
                // cout<<it<<nn;
                bool k=Search(vec[i]);
                if(f) break;
            }
            if(f) cout<<"Set "<<tno<<" is not immediately decodable"<<nn;
            else cout<<"Set "<<tno<<" is immediately decodable"<<nn;
            tno++;
            vec.clear();
              mem(Trie,-1);
              mem(isword,0);
              f=0;
              nnode=0; 
           }
           else{
            // cout<<str<<nn;
            Insert(str);
            vec.push_back(str);
           }
        }
    }


    return 0;
}

