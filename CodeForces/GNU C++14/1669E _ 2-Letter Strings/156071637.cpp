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
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<string> v(n);
        map<string,ll> s;
        map<char,ll>start,fin;
        for(ll i=0;i<n;i++){cin>>v[i];}
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ans+=(start[v[i][0]]+fin[v[i][1]]-2*s[v[i]]);
            start[v[i][0]]++;
            fin[v[i][1]]++;
            s[v[i]]++;
        }
        cout<<ans<<endl;
 
    }
 
    return ghost;
}