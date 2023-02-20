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
void solve(){
ll n,on,m,x,sm=0,sy=0;
    cin>>n;
    on=n;
    ll index,index2;
    vector<int> a(n);
    vector<int> b(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    cin>>b[i];
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
     for(ll i=0;i<n;i++)
    {
        if(i==0)
        a[i]=a[i];
        else
        a[i]+=a[i-1];
    }
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        b[i]=b[i];
        else
        b[i]+=b[i-1];
    }
    x=n/4;
    x=n-x;
    ll y=x;
    x-=1;
    y-=1;
    sm=0;
    sy=0;
    if(sm+a[x]>=b[y])
    cout<<"0\n";
    else
    {
        while(sm+a[x]<b[y])
        {
            sm+=100;
            n++;
            if(n%4==0)
            {
                if(x!=0)
                x--;
                else
                {
                    a[0]=0;
                    x=0;
                }
            }
            else
            {
                if(y!=on-1)
                y++;
            }
            // cout<<"sm"<<sm<<"\n";
            // cout<<"a"<<a[x]<<"\n";
            // cout<<"b"<<b[y]<<"\n";
            // cout<<"x"<<x<<"\n";
            // cout<<"y"<<y<<"\n";
        }
        cout<<n-on<<"\n";
    }
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
        solve();
    }
    return ghost;
}