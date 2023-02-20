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
 
    cin>>t;
    while(t--)
    {
 
 
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
 
        }
        ll i=-1,j=n-1;
        ll x=a[n-1];
        for(ll k=0;k<n;k++){
            if(a[k]!=x){i=k;break;}
 
        }
        if(i==-1){
                cout<<0<<endl;continue;
        }
        else{
            ll c=0;
            ll end=0;
            for(ll in=n-1;in>=0;in--){
                if(a[in]==x) {end++;}
                else{
                    in-=end;
                    c++;
                    end+=end;
                    in++;
                }
            }
            cout<<c<<endl;
        }
 
    }
 
    return ghost;
}