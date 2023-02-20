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
        ll n;
        cin>>n;
        vector<ll>v(n);
 
        ll cnt=0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
 
 
        }
        bool f=1;
 
 
        if(n%2==1){cout<<"NO"<<endl;}
 
        else {
            vector<ll>v2=v;
            sort(v.begin(),v.end());
            vector<ll>ans(n);
            ll l=0,r=n-2,i=1;
            for(i=0;i<n/2;i++){ans[(2*i)%n]=v[i];}
            for(i=n/2;i<n;i++){ans[(2*i+1)%n]=v[i];}
            //ans.push_back(v[n-1]);//cout<<v[n-1]<<endl;
            bool g=0;
            for(ll i=1;i<n-1;i++){
            if(ans[i]>ans[i+1] && ans[i]>ans[i-1]) continue;
            else if(ans[i]<ans[i+1] && ans[i]<ans[i-1]){continue;}
            else{g=1;break;}}
            if(g==1) {cout<<"NO"<<endl;}
            else{cout<<"YES"<<endl;
            for(ll i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;}
        }
 
 
 
 
    }
 
    return ghost;
}