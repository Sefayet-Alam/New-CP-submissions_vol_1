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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
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
    string s;
    cin>>t;
    while(t--)
    {
        ll px,py;
        cin>>px>>py;
        string s;
        cin>>s;
        ll n=s.size();
        ll r=0,d=0,l=0,u=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='R') r++;
            else if(s[i]=='L') l++;
            else if(s[i]=='U') u++;
            else d++;
        }
        bool f=0,g=0,m=0,p=0;
        if(px==0) {f=1;}
        else if(px>0 && r>=px){f=1;}
        else if(px<0 && l>=abs(px)){f=1;}
        if(py==0){g=1;}
        else if(py>0 && u>=py){g=1;}
        else if(py<0 && d>=abs(py)){g=1;}
        if(g && f){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
 
    return ghost;
}