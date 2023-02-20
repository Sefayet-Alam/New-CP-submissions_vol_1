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
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
 
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll ans=accumulate(a,a+n,0LL);
    ll x=0,f=0,c=0,t=0;
    map<int,int> m;
    while(q--){
        cin>>t;
        if(t==1){
            cin>>f>>x;
            if(c==0){
                ans+=(x-a[f-1]);
                cout<<ans<<endl;
                a[f-1]=x;
            }
            else{
                if(m.find(f-1)!=m.end()) {
                    ans+=x-m[f-1];
                    m[f-1]=x;
                }
                else {
                    m.insert(make_pair(f-1,x));
                    ans+=x-c;
                }
                cout<<ans<<endl;
 
            }
        }
        else{
            if(!m.empty()) m.clear();
            cin>>x;
            c=x;
            ans=n*x;
            cout<<ans<<endl;
        }
    }
 
 
    return ghost;
}