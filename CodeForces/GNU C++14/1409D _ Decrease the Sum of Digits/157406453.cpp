#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1000000007;
void setIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
map<string,string> mp;
ll pow1(ll n, ll p)
{
    if (p == 0)
        return 1;
    ll x = pow1(n, p / 2);
    x = (x * x) % md;
    if (p % 2 == 0)
        return x;
    else
        return (x * n) % md;
}
 
  ll check(ll n , ll ok){
        ll ans=n+ok;
        ll total=0;
        while(ans){
            total+=(ans%10);
            ans/=10;
        }
        return total;
    }
     void solve(){
        ll n,s;
        cin>>n>>s;
        ll a=n;
        ll total=0;
        while(a){
            total+=(a%10);
            a/=10;
        }
        if(total<=s){
            cout<<0<<"\n";
            return;
        }
        ll b=n;
        ll ok=0;
        ll p=1;
        ll tot=0;
        ll ss=0;
        while(b && total>s){
            ll last=b%10;
            total-=last;
            // cout<<"in "<<last<<" "<<total<<"\n";
            if(last){
                ok+=(ll)(p*(10-last));
                b/=10;
                b+=1;
                ss=b;
                while(ss){
                    tot+=(ss%10);
                    ss/=10;
                }
                if(b==1){
                    b=0;
                    break;
                }
                total=tot;
            }
            else{
                b/=10;
            }
            p*=(ll)10;
            if(check(n,ok)<=s){
                cout<<ok<<"\n";
                return;
            }
        }
        cout<<ok<<"\n";
    }
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
     solve();
    }
    return ghost;
}