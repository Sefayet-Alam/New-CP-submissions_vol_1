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
    int n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ll y=x%m;
        mp[y]++;
    }
    ll total=0;
    for(auto i : mp){
        if(i.first==0 && i.second>0) total++;
        else if(mp.count(m-i.first)==0) total+=i.second;
        else if(m-i.first == i.first){
            total++;
        }
        else if(m-i.first>i.first){
            ll a=i.second;
            ll b=mp[m-i.first];
            if(abs(a-b)<=1) total++;
            else if(a>b){
                a-=(b+1);
                total++;
                total+=a;
            }
            else{
                b-=(a+1);
                total++;
                total+=b;
            }
        }
    }
    cout<<total<<"\n";
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