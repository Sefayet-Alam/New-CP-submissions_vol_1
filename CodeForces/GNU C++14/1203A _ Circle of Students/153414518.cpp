#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
int main()
{
    fast;
 
    ll t;
    cin>>t;
    while(t--)
    {
 
    ll n;
    cin>>n;
    vector<ll> v(n+1);
    bool f=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(ll i=1;i<n;i++)
    {
        if(!(abs(v[i]-v[i-1])==1 || v[i]==1 && v[i-1]==n ||v[i-1]==1 && v[i]==n))
           {
             f=1;
             break;
           }
    }
    if(f==0) {cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
    }
return 0;
}