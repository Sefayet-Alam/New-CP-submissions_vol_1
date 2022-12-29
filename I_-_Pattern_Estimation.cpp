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
        ll k;
        cin>>k;
        vector<ll>vec(k);
        string s="";
        for(ll i=0;i<k;i++){
            cin>>vec[i];
        }
         for(ll i=1;i<k;i++){
            if(vec[i-1]<vec[i]){
                s+='G';
            }
            else if(vec[i-1]==vec[i]){
                s+='E';
            }
            else s+='L';
        }

        string p;
       cin>>p;
       
        ll n=p.size();
        ll m=s.size();
        vector<ll>lps(n);
        ll In=0;
        bool f=0;
        for(ll i=1;i<n;){
            if(p[In]==p[i]){
                lps[i]=In+1;
                In++;
                i++;
            }
            else{
                if(In!=0){
                    In=lps[In-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        // for(auto it:lps){
        //     cout<<it<<" ";
        // }
        // cout<<endl;
        ll l=0,r=0;
        ll cnt=0;
        vector<pair<ll,ll>> ans;
        for(l=0;l<m;){
           // cout<<l<<" "<<r<<" "<<cnt<<endl;
            
            if(s[l]==p[r]){
                l++;
                r++;
               
            }
            else{
                if(r!=0){
                r=lps[r-1];
                cnt=lps[r];
                }
                else{
                    l++;
                }
            }

            if(r==n){
                f=1;
                break;
                //ans.push_back({l-n+1,l});
            }
        }
        if(f) cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
        // for(auto it:ans){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }

    }


    return 0;
}

