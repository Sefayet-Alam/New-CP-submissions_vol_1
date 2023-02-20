#include <bits/stdc++.h>
#define ll long long
#define ghost 0
#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 1011
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n+1),b(n+1);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]>b[i]) {swap(a[i],b[i]);}
        }
        ll sum=0;
         for(ll i=0;i<n-1;i++)
        {
           sum+=abs(a[i+1]-a[i]);
           sum+=abs(b[i+1]-b[i]);
        }
        cout<<sum<<endl;
 
    }
    return ghost;
}