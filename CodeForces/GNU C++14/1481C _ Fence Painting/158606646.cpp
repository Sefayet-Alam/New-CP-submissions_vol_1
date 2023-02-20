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
     ll n,m;
     cin>>n>>m;
     vector<ll>a(n),b(n),c(m);
     map<ll,vector<ll>>mpp;
     map<ll,ll>mp1;
    for(ll i=0;i<n;i++) {cin>>a[i];}
    for(ll i=0;i<n;i++) {
            cin>>b[i];
            mp1[b[i]]=1;
            if(b[i]!=a[i]) mpp[b[i]].push_back(i);}
 
 
    for(ll i=0;i<m;i++) cin>>c[i];
    if(mp1[c[m-1]]==0){cout<<"NO"<<endl; continue;}
    ll ans[m];
    for(ll i=0;i<m;i++){
        ll x=c[i];
        if(mpp[x].size()==0)ans[i]=-1;
        else{
        ans[i]=mpp[x].back();
        a[mpp[x].back()]=x;
        mpp[x].pop_back();
        }
    }
      ll last;
 
 
        if(ans[m-1]!=-1)
        {
            last=ans[m-1];
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                if(b[i]==c[m-1]) last=i;
            }
        }
 
        ll flag=1;
        for(ll i=0; i<n; i++) if(a[i]!=b[i]) flag=0;
 
 
 
        if(flag)
        {
            for(ll i=0; i<m; i++)
            {
                if(ans[i]==-1) ans[i]=last;
            }
 
            cout<<"YES"<<endl;
            for(ll i=0; i<m; i++)
            {
                cout<<ans[i]+1<<" ";
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
 
 
    }
 
 
 
 
 
    return ghost;
}
 