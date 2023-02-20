#include <bits/stdc++.h>
#define ll long long
 
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
const ll md = 1000000007;
 
int main()
{
    fast;
 
 
    ll t;
    cin>>t;
    while(t--)
    {
    ll n, m;
    cin>>n>>m;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
            cin>>v[i];
    }
    if(2*n>m){ cout<<"NO"<<endl; }
    else
    {
    sort(v.begin(),v.end());
    ll tot=n+v[n-1];
    for(ll i=1; i<n; i++)
    {
    tot+=v[i];
    }
    if(tot>m){
    cout<<"NO"<<endl;
    }
    else{
    cout<<"YES"<<endl;
    }
    }
    }
 
    return  0;
}