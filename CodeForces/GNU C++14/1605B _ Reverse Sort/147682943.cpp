#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
 
ll power(ll a, ll b){ // a raised to power b
  ll res=1;
  while(b){
    if(b&1) res=(res*a)%mod;
    b>>=1;
    a=(a*a)%mod;
  }
  return res;
}
 
bool isprime(ll n){
  for(ll i=2;i*i<=n;i++){
   if(n%i==0) return 0;
  }
  return 1;
}
 
void solve()
{
   ll n;cin>>n;
   string s;cin>>s;
   string tmp=s;
   vector<ll> ans;
   sort(tmp.begin(),tmp.end());
   if(s==tmp){
       cout<<0<<endl;return;
   }
   for(int i=0;i<n;i++){
       if(s[i]!=tmp[i]) ans.push_back(i+1);
   }
   cout<<1<<endl;
   cout<<ans.size()<<" ";
   for(auto x:ans) cout<<x<<" ";
   cout<<endl;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}