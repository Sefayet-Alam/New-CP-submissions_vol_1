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
        string s;
        cin>>s;
        ll c=INF,zero,one,m,r;
        ll n=s.size();
        zero=count(s.begin(),s.end(),'0');
        one=n-zero;
        m=zero;
        r=one;
        for(ll i=0; i<n; i++)
        {
            c=min(c,min(m,r));
            if(s[i]=='0') {m--,r++;}
            else
                {r--,m++;}
 
        }
        cout<<c<<endl;
    }
 
    return ghost;
}
 