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
    ll t;
    cin>>t;
    while(t--)
    {
 
    ll n,xx;
    cin>>n>>xx;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];
    bool ok=true;
    if(xx==n)
    {
        if(is_sorted(arr.begin(),arr.end())) cout<<"YES"<<endl;
            else  cout<<"NO"<<endl;
    }
    else if(xx<=n/2) cout<<"YES"<<endl;
 
    else
    {
        ll x=n-xx;
        vector<ll>v;
        for(int i=0;i<x;i++)
        {
            v.push_back(arr[i]);
        }
        for(int i=n-1;i>=n-x;i--)
        {
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        vector<ll>vv;
        for(int i=0;i<v.size()/2;i++)
        vv.push_back(v[i]);
        for(int i=x;i<n-x;i++)
        vv.push_back(arr[i]);
        for(int i=v.size()/2;i<v.size();i++)
        vv.push_back(v[i]);
        if(is_sorted(vv.begin(),vv.end())) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    }
 
    return ghost;
}