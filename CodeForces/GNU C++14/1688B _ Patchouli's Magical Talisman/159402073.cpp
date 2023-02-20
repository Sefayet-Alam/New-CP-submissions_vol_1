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
 
ll trail(ll x)
{
ll count = 0;
  while ((x & 1) == 0)
  {
      x = x >> 1;
      count++;
  }
  return count;
}
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    string s;
    cin>>t;
    //t=1;
    while(t--)
    {
        ll n;
        cin>>n;
        ll od=0,even=0;
        ll sum=0;
        vector<ll>a(n);
        ll trail0=1e17;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]&1) od++;
            else{
                even++;
 
                trail0=min(trail0,trail(a[i]));
 
            }
        }
        if(od==n){cout<<0<<endl;}
        else if(od>=1){
                ll cnt=even-1;
                cout<<1+cnt<<endl;}
        else{
        cout<<trail0+even-1<<endl;
        }
 
 
    }
 
    return ghost;
}
 