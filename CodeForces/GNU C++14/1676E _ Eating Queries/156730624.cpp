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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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
    ll n,q,tot=0;
    cin>>n>>q;
    vector<ll>v(n),psum(n,0),d(n);
    for(ll i=0;i<n;i++){cin>>v[i];tot+=v[i];}
    sort(v.rbegin(),v.rend());
    psum[0]=v[0];
    for(ll i=1;i<n;i++){psum[i]=psum[i-1]+v[i];}
    while(q--)
    {
        ll x;
        cin>>x;
        if(x>tot){cout<<-1<<endl;}
 
        else{
            ll l=0,r=n-1,m=0;
           while(l<r)
           {
               m=(l+r)/2;
               if(psum[m]<x){l=m+1;}
               else{r=m;}
           }
 
         cout<<l+1<<endl;
        }
    }
    }
 
    return ghost;
}
 