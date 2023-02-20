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
 
 
int main()
{
    fast;
    //setIO();
 
    ll t;
    cin>>t;
    while(t--)
    {
 
 
        ll n;
        cin>>n;
        bool f=0;
        ll x;
        ll g=-1;
       vector<ll> v(n+1);
       for(ll i=1;i<=n;i++)
       {
           cin>>x;
           v[i]=x;
 
       }
        for(ll i=1;i<=n;i=i+2)
       {
        if(v[1]%2==0 && v[i]%2==1){f=1;}
        if(v[1]%2==1 && v[i]%2==0){f=1;}
       }
        for(ll i=2;i<=n;i=i+2)
       {
        if(v[2]%2==0 && v[i]%2==1) {f=1;}
        if(v[2]%2==1 && v[i]%2==0) {f=1;}
 
       }
 
 
       if(f==1) {cout<<"NO"<<endl;}
       else{cout<<"YES"<<endl;}
    }
 
    return 0;
}