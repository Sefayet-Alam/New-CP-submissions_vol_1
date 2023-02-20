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
        cin>>n;
        vector<ll> v(n+1);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll maxm=-1,minm=1e18,cnt=0;
        for(ll i=1;i<n;i++)
        {
            if(v[i]==v[i-1])
            {
                cnt++;
                maxm=max(maxm,i-1);
                minm=min(minm,i);
            }
        }
         if(cnt<=1) {cout<<0<<endl;}
         else if(minm==maxm){cout<<1<<endl;}
         else {cout<<maxm-minm<<endl;}
 
    }
 
    return ghost;
}
 