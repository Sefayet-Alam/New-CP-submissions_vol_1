#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
vector<ll>psum(1011);
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n;
        vector<ll>v(n);
        bool f=1;
 
 
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
 
        }
        ll maxm=v[0];
        for(ll i=0;i<n;i++)
        {
            if(v[i]>maxm) {maxm=v[i];}
 
        }
        for(ll i=0;i<n;i++)
        {
            if((maxm-v[i])%2!=0) {f=0; break;}
 
        }
        if(f==0) {cout<<"NO"<<endl;}
        else {cout<<"YES"<<endl;}
 
    }
    return ghost;
}