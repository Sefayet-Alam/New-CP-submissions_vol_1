#include <bits/stdc++.h>
#include <sstream>
using namespace std;
using ll = long long;
using vl = vector<ll>;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main()
{
    fast;
    ll s,n;
    ll x,y;
    cin>>s>>n;
    vector<pair<ll,ll> > v;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++)
    {
        s=s-v[j].first;
        if(s<=0) break;
        else s=s+v[j].second+v[j].first;
    }
    if(s>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
}