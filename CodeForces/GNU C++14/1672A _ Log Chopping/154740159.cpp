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
 
map<string,string> mp;
 
char in[maxN],out[maxN];
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c=0;
        cin>>n;
        vector<ll> v(n+1);
        ll o=0,e=0;
        bool f=0;
        for(ll i=0;i<n;i++){ cin>>v[i];}
         for(ll i=0;i<n;i++){
                if(v[i]%2==0) {e++;}
                else o++;
         }
         if(o==n){cout<<"maomao90"<<endl;}
         else if(e%2==0){cout<<"maomao90"<<endl;}
         else{cout<<"errorgorn"<<endl;}
 
    }
 
    return ghost;
}