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
    ll t;
    string s;
    cin>>t;
    //t=1;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        ll maxm=INT_MIN;
        ll h1,h2,w1,w2;
        ll x;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>x;
              if(x>maxm){maxm=x;h1=i;w1=j; }
            }
        }
    //cout<<h1<<w1<<endl;
       ll h=max(h1+1,n-h1);
       ll w=max(w1+1,m-w1);
       cout<<h*w<<"\n";
 
    }
    return ghost;
}