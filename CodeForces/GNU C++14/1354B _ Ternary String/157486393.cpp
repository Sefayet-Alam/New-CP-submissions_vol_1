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
        string s;
        cin>>s;
        ll cnt[4]={};
        ll l=0,n=s.length();
        ll ans=n+1;
        for(ll r=0;r<n;++r){
            ll dig=s[r]-'0';
            cnt[dig]++;
            while(cnt[s[l]-'0']>1)
                cnt[s[l]-'0']--,l++;
 
            if(cnt[1] && cnt[2] && cnt[3])
                ans=min(ans,r-l+1);
 
 
        }
        if(ans==n+1){
            ans=0;
        }
        cout<<ans<<endl;
    }
 
    return ghost;
}