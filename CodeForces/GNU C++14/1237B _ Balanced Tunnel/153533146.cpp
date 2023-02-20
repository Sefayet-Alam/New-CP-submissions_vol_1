#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
map<ll,vector<ll>> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    ll n;
 
    ll a;
    cin>>n;
    vector<pair<ll,ll>>mp(n);
    for(int i=0;i<n;i++)
    {
 
        cin>>a;
        mp[a-1].first=i+1;
    }
    ll cnt=0;
     for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a-1].second=i+1;
 
    }
    sort(mp.begin() , mp.end() ) ;
    ll mx=0;
    for(auto m : mp)
    {
        if(m.second<mx) {cnt ++;}
 
        mx = max(mx, m.second ) ;
    }
 
 
    cout<<cnt<<endl;
    return ghost;
}
 