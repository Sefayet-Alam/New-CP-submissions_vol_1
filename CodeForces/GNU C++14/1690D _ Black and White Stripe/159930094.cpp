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
ll fact(ll n){
    if(n==1) return 1;
    return n*fact(n-1);
 
}
 
char in[maxN],out[maxN];
int main()
{
    fast;
    //setIO();
    ll t;
    string s;
    cin>>t;
    //t=1;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
    map<char,int>mpp;
    for(ll i=0;i<k;i++){
        mpp[s[i]]++;
 
    }
    ll ans=mpp['W'];
    ll i=0,j=0;
    for(i=k;i<n;i++){
        mpp[s[i]]++;
        mpp[s[j]]--;
        ans=min(ans,0LL+mpp['W']);
        j++;
    }
    cout<<ans<<endl;
    }
 
    return ghost;
}