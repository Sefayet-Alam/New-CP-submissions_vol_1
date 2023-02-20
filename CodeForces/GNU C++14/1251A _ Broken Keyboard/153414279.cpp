#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
map<char,ll> mp;
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    ll n=s.size();
    set<char>c;
    for(ll i=0;i<n;i++)
    {
        if(s[i]!=s[i+1]) {c.insert(s[i]);}
        else i++;
    }
    vector<char>v;
    for(auto i : c){
     v.push_back(i);
    }
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    }
}