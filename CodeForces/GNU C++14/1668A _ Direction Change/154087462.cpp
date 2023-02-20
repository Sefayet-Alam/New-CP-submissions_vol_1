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
 
 
char in[maxN],out[maxN];
int main()
{
    fast;
 
 
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,m;
    cin>>n>>m;
    if(n==1 && m==1){ cout<<0<<endl; }
    else if((n==1 && m>2)||(m==1 && n>2)){ cout<<-1<<endl; }
    else
    {
    ll g=min(n,m), r=max(n,m);
    ll a=(((r-g)%2)+2*(g-1)+4*((r-g)/2))*1LL;
    cout<<a<<"\n";
    }
    }
 
    return ghost;
}