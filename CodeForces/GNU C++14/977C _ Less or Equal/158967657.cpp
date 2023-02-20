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
 
bool istrue(ll n){
    if(n&1){
       return true;
     }
    else{
       ll x=n;
       while(x>2){
        x=x/2;
        if(x&1){
            if(n%x==0){
                return true;
            }
        }
       }
    }
     return false;
}
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    string s;
    t=1;
    while(t--)
    {
   ll n,k;
   cin>>n>>k;
   vector<ll> v(n);
   for(ll i=0;i<n;i++){cin>>v[i];}
   sort(v.begin(),v.end());
    if(k==0){
        if(v[0]>1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
   else if(k<=n-1){
        if(v[k-1]!=v[k])
            cout<<v[k-1]<<endl;
        else
            cout<<"-1"<<endl;
    }
   else if(k==n)cout<<v[k-1]<<endl;
    }
 
    return ghost;
}
 